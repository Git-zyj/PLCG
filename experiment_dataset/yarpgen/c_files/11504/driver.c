#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17591;
signed char var_1 = (signed char)-47;
_Bool var_2 = (_Bool)0;
int var_3 = 317440629;
long long int var_4 = 596170579209903892LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -1549161617202144323LL;
short var_16 = (short)26350;
unsigned int var_17 = 2748834885U;
unsigned long long int var_18 = 554355192320771737ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
