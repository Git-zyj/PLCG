#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_7 = (signed char)9;
unsigned long long int var_10 = 7638783304306970568ULL;
signed char var_12 = (signed char)-83;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_18 = 1271998252;
unsigned long long int var_19 = 11999011936698912461ULL;
int var_20 = -1812208704;
long long int var_21 = 6039629899946254683LL;
int var_22 = -1171035500;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
