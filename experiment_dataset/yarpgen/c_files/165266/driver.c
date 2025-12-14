#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)19;
unsigned short var_3 = (unsigned short)3295;
signed char var_7 = (signed char)73;
unsigned char var_8 = (unsigned char)30;
long long int var_11 = -3386161979027341229LL;
int zero = 0;
signed char var_13 = (signed char)-76;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 9970811315688483279ULL;
unsigned long long int var_16 = 8400282277602481172ULL;
signed char var_17 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
