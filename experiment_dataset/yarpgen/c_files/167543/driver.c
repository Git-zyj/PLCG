#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22297;
unsigned int var_3 = 3430769864U;
int var_4 = -1009049391;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 3219927111253073023ULL;
unsigned char var_18 = (unsigned char)103;
int zero = 0;
long long int var_19 = 4790339992089851040LL;
unsigned short var_20 = (unsigned short)38797;
signed char var_21 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
