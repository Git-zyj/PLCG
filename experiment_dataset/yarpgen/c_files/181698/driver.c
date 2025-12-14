#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1834221821;
unsigned long long int var_2 = 16833531229222660971ULL;
signed char var_6 = (signed char)37;
unsigned long long int var_8 = 12508205488338781629ULL;
short var_9 = (short)-19799;
int var_17 = 125146285;
int zero = 0;
signed char var_19 = (signed char)51;
unsigned long long int var_20 = 17057978408312260673ULL;
unsigned int var_21 = 4184847448U;
unsigned short var_22 = (unsigned short)56445;
signed char var_23 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
