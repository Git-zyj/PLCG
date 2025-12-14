#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27199;
signed char var_4 = (signed char)108;
int var_14 = -689515865;
int zero = 0;
unsigned short var_15 = (unsigned short)5711;
long long int var_16 = -8897428142710998481LL;
long long int var_17 = 6645879050592031994LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
