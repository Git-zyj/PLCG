#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2772135070U;
signed char var_7 = (signed char)-123;
signed char var_8 = (signed char)40;
unsigned long long int var_10 = 4383692682036813976ULL;
long long int var_14 = 4460400668735538015LL;
short var_15 = (short)-26047;
int zero = 0;
unsigned int var_16 = 1825667U;
unsigned char var_17 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
