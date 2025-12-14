#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)233;
signed char var_6 = (signed char)-98;
long long int var_11 = -4014203073808832850LL;
signed char var_13 = (signed char)67;
int var_16 = -1663943978;
unsigned long long int var_18 = 16810568743388614817ULL;
int zero = 0;
signed char var_20 = (signed char)50;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8069128809366395085ULL;
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
