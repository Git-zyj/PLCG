#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned short var_2 = (unsigned short)1886;
unsigned long long int var_7 = 3114496561121570148ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -9017875266511900067LL;
long long int var_11 = 7960434254872085448LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
