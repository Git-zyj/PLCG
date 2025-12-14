#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1814734593;
long long int var_6 = -9133426959060635607LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3953688211516323126ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)35594;
unsigned long long int var_12 = 5670541388771251615ULL;
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
