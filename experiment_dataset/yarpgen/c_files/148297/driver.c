#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 259470506;
unsigned int var_2 = 3480820807U;
int var_3 = -588597332;
signed char var_4 = (signed char)-4;
signed char var_5 = (signed char)57;
unsigned short var_7 = (unsigned short)33182;
short var_8 = (short)-20446;
signed char var_11 = (signed char)102;
int zero = 0;
unsigned int var_12 = 304602356U;
unsigned short var_13 = (unsigned short)14605;
short var_14 = (short)-15298;
unsigned long long int var_15 = 218444003620311802ULL;
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
