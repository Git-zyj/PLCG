#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2185669340U;
signed char var_4 = (signed char)0;
signed char var_7 = (signed char)-42;
int var_9 = 2017821788;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)124;
int zero = 0;
int var_20 = -566389194;
unsigned long long int var_21 = 10327168510732709363ULL;
unsigned char var_22 = (unsigned char)33;
unsigned char var_23 = (unsigned char)188;
unsigned short var_24 = (unsigned short)50853;
long long int var_25 = -7191698798077060752LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
