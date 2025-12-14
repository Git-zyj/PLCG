#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31243;
unsigned char var_5 = (unsigned char)39;
unsigned char var_6 = (unsigned char)212;
unsigned long long int var_10 = 5856225247840137676ULL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3609667431U;
unsigned int var_14 = 697281309U;
unsigned short var_18 = (unsigned short)9444;
int zero = 0;
int var_19 = 1024962924;
unsigned char var_20 = (unsigned char)197;
int var_21 = 1913686409;
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
