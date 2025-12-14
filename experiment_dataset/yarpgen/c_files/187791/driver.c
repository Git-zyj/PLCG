#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1189487790;
short var_1 = (short)15261;
short var_5 = (short)6283;
unsigned long long int var_6 = 8462590654592449838ULL;
unsigned long long int var_7 = 1568191180259339445ULL;
unsigned long long int var_8 = 16871009594922450541ULL;
unsigned long long int var_10 = 9480099071516294854ULL;
int zero = 0;
unsigned long long int var_12 = 5785017446931493467ULL;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 3908485481U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
