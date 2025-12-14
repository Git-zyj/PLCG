#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 33103402;
int var_3 = -1070069743;
short var_6 = (short)23087;
int var_7 = 2073816999;
unsigned int var_8 = 3970299197U;
long long int var_9 = -9191893666452564718LL;
signed char var_10 = (signed char)(-127 - 1);
signed char var_14 = (signed char)-119;
int var_16 = 784021191;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2886491923U;
unsigned char var_19 = (unsigned char)25;
short var_20 = (short)3517;
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
