#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 987703076U;
int var_1 = 14136464;
long long int var_2 = -8563193545185524776LL;
unsigned short var_4 = (unsigned short)60428;
short var_6 = (short)-10623;
unsigned long long int var_7 = 2917855098011350930ULL;
unsigned long long int var_8 = 4038860039897192554ULL;
long long int var_9 = -8403673868745684510LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -3633531613329742153LL;
int var_13 = -888807473;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
