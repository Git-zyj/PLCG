#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6318498462261294637ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)221;
signed char var_10 = (signed char)-53;
int var_11 = 1196670309;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -2198699674958983276LL;
unsigned char var_14 = (unsigned char)137;
_Bool var_15 = (_Bool)0;
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
