#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6207066893706930689LL;
_Bool var_8 = (_Bool)0;
long long int var_10 = -3531426059666544314LL;
int zero = 0;
unsigned int var_17 = 654454348U;
unsigned char var_18 = (unsigned char)95;
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
