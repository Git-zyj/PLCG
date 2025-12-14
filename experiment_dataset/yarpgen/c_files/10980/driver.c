#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
_Bool var_4 = (_Bool)1;
long long int var_13 = 2712501053627537596LL;
int zero = 0;
unsigned short var_18 = (unsigned short)1362;
long long int var_19 = 1811111125724737717LL;
unsigned long long int var_20 = 10754718754728927038ULL;
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
