#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31655;
_Bool var_8 = (_Bool)0;
unsigned char var_14 = (unsigned char)216;
short var_15 = (short)22779;
int zero = 0;
signed char var_16 = (signed char)-6;
unsigned char var_17 = (unsigned char)224;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 10624892263186745039ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
