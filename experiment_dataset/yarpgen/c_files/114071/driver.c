#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 670851910;
unsigned long long int var_2 = 8495714427521207729ULL;
int var_4 = -1185495656;
unsigned short var_6 = (unsigned short)18595;
signed char var_9 = (signed char)-64;
unsigned char var_10 = (unsigned char)232;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1969451810870004712LL;
void init() {
}

void checksum() {
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
