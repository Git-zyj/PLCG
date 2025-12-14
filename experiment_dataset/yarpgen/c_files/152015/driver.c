#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5261;
unsigned long long int var_1 = 12540186380441601014ULL;
unsigned long long int var_2 = 9989316637578461845ULL;
unsigned long long int var_4 = 16931490071115627698ULL;
unsigned short var_5 = (unsigned short)22270;
unsigned int var_6 = 2804238117U;
short var_7 = (short)14925;
signed char var_8 = (signed char)104;
unsigned long long int var_9 = 17963832545474640425ULL;
unsigned int var_10 = 276618546U;
short var_11 = (short)-8921;
int zero = 0;
unsigned int var_12 = 3684041406U;
short var_13 = (short)8190;
unsigned short var_14 = (unsigned short)20231;
short var_15 = (short)21079;
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
