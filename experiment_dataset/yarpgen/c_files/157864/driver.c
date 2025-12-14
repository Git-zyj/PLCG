#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5467061862377386475LL;
unsigned int var_8 = 426853112U;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-83;
int var_15 = -685830204;
unsigned short var_16 = (unsigned short)4974;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
