#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)96;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)6488;
unsigned short var_7 = (unsigned short)57870;
signed char var_8 = (signed char)57;
unsigned char var_9 = (unsigned char)245;
unsigned char var_13 = (unsigned char)194;
unsigned char var_16 = (unsigned char)76;
int zero = 0;
signed char var_17 = (signed char)1;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)226;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
