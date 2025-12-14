#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)-43;
unsigned long long int var_7 = 8739544133551977816ULL;
signed char var_9 = (signed char)111;
int zero = 0;
signed char var_10 = (signed char)8;
unsigned short var_11 = (unsigned short)38906;
unsigned long long int var_12 = 6592090293662993186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
