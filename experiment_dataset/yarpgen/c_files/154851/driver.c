#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)125;
signed char var_7 = (signed char)63;
signed char var_9 = (signed char)-47;
short var_10 = (short)-11196;
unsigned int var_13 = 4106098166U;
unsigned short var_15 = (unsigned short)61483;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
signed char var_19 = (signed char)-14;
unsigned short var_20 = (unsigned short)56122;
int var_21 = 1157165906;
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
