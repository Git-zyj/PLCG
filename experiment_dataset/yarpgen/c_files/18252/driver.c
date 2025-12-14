#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12354;
signed char var_4 = (signed char)44;
unsigned char var_8 = (unsigned char)79;
unsigned char var_9 = (unsigned char)35;
int var_11 = -802761817;
int var_12 = -1425606742;
unsigned char var_14 = (unsigned char)129;
int zero = 0;
unsigned char var_15 = (unsigned char)139;
signed char var_16 = (signed char)42;
unsigned char var_17 = (unsigned char)41;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
