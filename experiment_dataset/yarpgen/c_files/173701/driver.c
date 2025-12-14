#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
signed char var_1 = (signed char)-81;
long long int var_2 = -2757234641016237212LL;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)69;
signed char var_8 = (signed char)57;
short var_10 = (short)19334;
signed char var_11 = (signed char)100;
int zero = 0;
unsigned long long int var_12 = 3805549599772686497ULL;
unsigned long long int var_13 = 18376834635785258705ULL;
signed char var_14 = (signed char)-101;
signed char var_15 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
