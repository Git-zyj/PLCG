#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1759781714804344993LL;
unsigned int var_2 = 336257450U;
signed char var_3 = (signed char)-14;
int var_4 = -288669429;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)35;
unsigned long long int var_7 = 17571255561989206531ULL;
unsigned long long int var_8 = 1743383473798768319ULL;
short var_9 = (short)8065;
int zero = 0;
short var_10 = (short)20044;
short var_11 = (short)17387;
unsigned char var_12 = (unsigned char)27;
long long int var_13 = -4708999607887014031LL;
unsigned char var_14 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
