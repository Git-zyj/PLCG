#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -187709055;
unsigned long long int var_6 = 6592120607693742208ULL;
unsigned char var_8 = (unsigned char)230;
unsigned char var_10 = (unsigned char)55;
unsigned long long int var_13 = 4923763782598332664ULL;
int zero = 0;
signed char var_14 = (signed char)-38;
int var_15 = 917425770;
int var_16 = -1751907848;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
