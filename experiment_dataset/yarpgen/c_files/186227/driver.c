#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14462932211360060870ULL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -450543689975705264LL;
int var_3 = -1211262714;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)4;
long long int var_9 = 3024993534106605371LL;
unsigned int var_10 = 477542762U;
int var_12 = 185840929;
int zero = 0;
unsigned int var_15 = 460921286U;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-115;
int var_18 = -1651104282;
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
