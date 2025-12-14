#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_7 = 1851075454;
unsigned char var_10 = (unsigned char)76;
int zero = 0;
unsigned long long int var_12 = 13904368780797244624ULL;
unsigned int var_13 = 1580872857U;
long long int var_14 = 7078699941276794063LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
