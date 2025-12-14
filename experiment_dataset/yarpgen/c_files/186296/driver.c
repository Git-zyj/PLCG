#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
signed char var_2 = (signed char)35;
unsigned long long int var_3 = 8875892162591244580ULL;
unsigned short var_6 = (unsigned short)1904;
unsigned long long int var_7 = 13076780215077265315ULL;
unsigned long long int var_8 = 13997030418182293639ULL;
unsigned int var_10 = 438019235U;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_13 = 5110981843240681008LL;
long long int var_14 = -8119483692169189594LL;
signed char var_15 = (signed char)-102;
void init() {
}

void checksum() {
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
