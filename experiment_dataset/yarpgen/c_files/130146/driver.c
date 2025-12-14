#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 2026885458;
signed char var_4 = (signed char)8;
unsigned char var_7 = (unsigned char)241;
int var_8 = -1380136481;
unsigned char var_9 = (unsigned char)7;
signed char var_14 = (signed char)118;
long long int var_15 = -5732263581593421349LL;
int zero = 0;
int var_17 = 1599566540;
long long int var_18 = 615050160754107454LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
