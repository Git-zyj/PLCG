#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7883445248421817562LL;
signed char var_1 = (signed char)-117;
signed char var_6 = (signed char)65;
_Bool var_7 = (_Bool)0;
unsigned int var_11 = 1323590440U;
unsigned long long int var_14 = 15162252211334710113ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 75607285;
int var_17 = -812760815;
int var_18 = 751930749;
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
