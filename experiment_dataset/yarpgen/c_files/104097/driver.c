#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)30;
unsigned long long int var_5 = 10237658810883872065ULL;
unsigned char var_14 = (unsigned char)66;
int var_18 = -1163727507;
int zero = 0;
unsigned short var_20 = (unsigned short)23081;
unsigned long long int var_21 = 5416478344583045296ULL;
unsigned long long int var_22 = 9248196738183061323ULL;
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
