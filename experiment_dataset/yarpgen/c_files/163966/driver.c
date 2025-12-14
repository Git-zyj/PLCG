#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13590477138622993422ULL;
unsigned char var_4 = (unsigned char)150;
signed char var_6 = (signed char)-55;
int var_9 = -1946654811;
int var_10 = -978026052;
short var_12 = (short)26920;
int var_14 = 1470216329;
int zero = 0;
signed char var_16 = (signed char)100;
short var_17 = (short)-9636;
signed char var_18 = (signed char)-115;
unsigned char var_19 = (unsigned char)238;
void init() {
}

void checksum() {
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
