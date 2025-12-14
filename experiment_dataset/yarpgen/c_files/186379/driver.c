#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4581499324563359767ULL;
unsigned char var_2 = (unsigned char)176;
unsigned long long int var_7 = 17233796671216134384ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)40955;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2205715418863754171ULL;
void init() {
}

void checksum() {
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
