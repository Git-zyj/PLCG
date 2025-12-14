#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37694;
int var_4 = -1523184393;
unsigned char var_5 = (unsigned char)44;
unsigned int var_6 = 3977404143U;
int var_10 = 895038884;
unsigned int var_13 = 3293360607U;
unsigned long long int var_17 = 9903087056218751722ULL;
int zero = 0;
int var_18 = -1936332727;
short var_19 = (short)29746;
void init() {
}

void checksum() {
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
