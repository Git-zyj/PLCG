#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7573609338576790563LL;
unsigned int var_6 = 3462765354U;
long long int var_13 = 7728572300974533649LL;
int zero = 0;
int var_18 = 322190024;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)19452;
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
