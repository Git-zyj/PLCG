#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2568099472U;
unsigned long long int var_5 = 16018869887668236091ULL;
long long int var_6 = 2545330180613977993LL;
signed char var_7 = (signed char)25;
unsigned char var_8 = (unsigned char)216;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)53820;
unsigned short var_14 = (unsigned short)30806;
int zero = 0;
unsigned int var_18 = 316824034U;
unsigned char var_19 = (unsigned char)45;
unsigned char var_20 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
