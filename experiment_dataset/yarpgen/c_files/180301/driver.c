#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)249;
unsigned short var_2 = (unsigned short)14561;
signed char var_5 = (signed char)119;
unsigned int var_12 = 2002540944U;
unsigned int var_14 = 3843083489U;
int zero = 0;
unsigned short var_17 = (unsigned short)36460;
unsigned int var_18 = 1554874670U;
short var_19 = (short)32111;
unsigned long long int var_20 = 9483040229727647220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
