#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)57;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)142;
short var_12 = (short)-19515;
_Bool var_14 = (_Bool)0;
long long int var_15 = 988842064657433401LL;
int zero = 0;
int var_19 = 1264630285;
unsigned char var_20 = (unsigned char)244;
short var_21 = (short)-3918;
unsigned long long int var_22 = 12883588675663248237ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
