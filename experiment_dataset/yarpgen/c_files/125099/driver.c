#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -664594380;
signed char var_2 = (signed char)-81;
unsigned char var_5 = (unsigned char)108;
long long int var_15 = 5979101722115297157LL;
int zero = 0;
long long int var_17 = -2647532899128727232LL;
signed char var_18 = (signed char)47;
void init() {
}

void checksum() {
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
