#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16870;
unsigned long long int var_2 = 11352139497872898761ULL;
unsigned int var_3 = 2082731221U;
signed char var_4 = (signed char)-89;
unsigned long long int var_6 = 9615897413204977622ULL;
unsigned char var_7 = (unsigned char)69;
unsigned char var_8 = (unsigned char)18;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_10 = 6791174292050127447ULL;
int zero = 0;
short var_11 = (short)-3538;
unsigned int var_12 = 940637040U;
short var_13 = (short)-30172;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
