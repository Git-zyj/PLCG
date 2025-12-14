#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6295;
unsigned int var_3 = 580200596U;
unsigned long long int var_6 = 17320377161254410082ULL;
short var_12 = (short)-14533;
int zero = 0;
unsigned int var_14 = 1228850907U;
int var_15 = 1396690354;
long long int var_16 = -8080003501650036054LL;
signed char var_17 = (signed char)-101;
int var_18 = 1512163788;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
