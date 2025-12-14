#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16730466170955309730ULL;
unsigned int var_3 = 3885182371U;
long long int var_4 = -2819041759641310597LL;
int var_6 = 1317502038;
long long int var_8 = -846187792147502987LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-45;
long long int var_17 = 1116380878047874145LL;
unsigned long long int var_18 = 11062679192277943384ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
