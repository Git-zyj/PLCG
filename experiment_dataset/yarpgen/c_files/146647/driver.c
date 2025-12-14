#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57831;
unsigned long long int var_2 = 15687526807014128808ULL;
unsigned short var_4 = (unsigned short)32416;
long long int var_7 = -2145935583160143348LL;
signed char var_8 = (signed char)78;
int zero = 0;
int var_10 = -1917363342;
_Bool var_11 = (_Bool)0;
long long int var_12 = -5079119607508225423LL;
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
