#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)91;
signed char var_9 = (signed char)-60;
unsigned int var_14 = 745780511U;
unsigned int var_16 = 2847659308U;
int zero = 0;
long long int var_18 = -2347563253970018067LL;
unsigned short var_19 = (unsigned short)35953;
unsigned long long int var_20 = 2710947951090674026ULL;
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
