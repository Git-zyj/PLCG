#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
unsigned long long int var_3 = 14781140941202626578ULL;
long long int var_4 = 6262665173092160414LL;
int var_11 = -2073651574;
short var_16 = (short)18089;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)114;
long long int var_22 = -8749415233771131279LL;
unsigned long long int var_23 = 10165942984557878804ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
