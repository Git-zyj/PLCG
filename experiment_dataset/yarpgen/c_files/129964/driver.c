#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
signed char var_5 = (signed char)104;
long long int var_8 = -1007061304193137382LL;
int zero = 0;
unsigned char var_14 = (unsigned char)22;
long long int var_15 = -1531697281458292890LL;
unsigned long long int var_16 = 13519571197982223470ULL;
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
