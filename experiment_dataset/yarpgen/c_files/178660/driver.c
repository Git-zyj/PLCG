#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
signed char var_6 = (signed char)101;
long long int var_9 = 7777098670684084905LL;
signed char var_14 = (signed char)-45;
int zero = 0;
long long int var_20 = -5613610944513859301LL;
long long int var_21 = -8134683252310602106LL;
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
