#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)9;
short var_4 = (short)11192;
unsigned short var_7 = (unsigned short)12918;
short var_12 = (short)-14428;
signed char var_13 = (signed char)-48;
unsigned char var_16 = (unsigned char)3;
long long int var_18 = 2923766299453577355LL;
int zero = 0;
unsigned char var_20 = (unsigned char)59;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
