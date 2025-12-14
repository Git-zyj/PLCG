#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16834380966120536816ULL;
unsigned long long int var_3 = 16923060779252494403ULL;
short var_9 = (short)7498;
int zero = 0;
signed char var_12 = (signed char)-104;
unsigned short var_13 = (unsigned short)56354;
long long int var_14 = -3336505971318056630LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)222;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
