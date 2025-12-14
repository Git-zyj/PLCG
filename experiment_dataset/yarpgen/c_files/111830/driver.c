#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51547;
unsigned short var_2 = (unsigned short)1159;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 16454923114877507781ULL;
long long int var_7 = 1304686827928208923LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 1003623983748105526ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -129649174969162022LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
