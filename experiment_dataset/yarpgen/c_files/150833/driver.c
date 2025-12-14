#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)83;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)3;
signed char var_11 = (signed char)-42;
unsigned char var_17 = (unsigned char)29;
unsigned char var_18 = (unsigned char)110;
unsigned int var_19 = 2125802566U;
int zero = 0;
signed char var_20 = (signed char)-26;
long long int var_21 = 914290478313251642LL;
signed char var_22 = (signed char)(-127 - 1);
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
