#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40078;
int var_4 = -1344602524;
int var_8 = 37192211;
int var_9 = 476162259;
signed char var_10 = (signed char)70;
int var_12 = -1081705094;
unsigned char var_14 = (unsigned char)8;
int zero = 0;
unsigned short var_18 = (unsigned short)27565;
unsigned short var_19 = (unsigned short)20506;
signed char var_20 = (signed char)-93;
void init() {
}

void checksum() {
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
