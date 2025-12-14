#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 135750279257291452ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3837507548U;
unsigned long long int var_9 = 254191460585294555ULL;
short var_12 = (short)24181;
unsigned long long int var_15 = 84604471729592343ULL;
int zero = 0;
unsigned long long int var_20 = 6072425504537561085ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
