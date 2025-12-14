#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -984491882;
short var_5 = (short)19732;
unsigned char var_6 = (unsigned char)69;
unsigned long long int var_8 = 17989013760530073841ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17676932506698612320ULL;
signed char var_12 = (signed char)22;
signed char var_13 = (signed char)9;
signed char var_14 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
