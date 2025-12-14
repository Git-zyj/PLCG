#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -875930540086180057LL;
unsigned short var_5 = (unsigned short)11672;
unsigned short var_6 = (unsigned short)27165;
long long int var_7 = -6609730485377486510LL;
unsigned short var_8 = (unsigned short)53078;
signed char var_10 = (signed char)-25;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2017046154748454139LL;
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
