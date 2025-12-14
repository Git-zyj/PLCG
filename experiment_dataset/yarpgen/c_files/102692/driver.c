#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34277;
short var_4 = (short)3796;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 8808345407269364845ULL;
signed char var_7 = (signed char)-49;
unsigned int var_11 = 3356706861U;
short var_12 = (short)-8417;
signed char var_13 = (signed char)-3;
int zero = 0;
unsigned long long int var_15 = 8905166093072316061ULL;
unsigned int var_16 = 3482002494U;
void init() {
}

void checksum() {
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
