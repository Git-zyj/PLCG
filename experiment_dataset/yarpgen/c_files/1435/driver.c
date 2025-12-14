#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8503938715078083943LL;
signed char var_4 = (signed char)4;
unsigned char var_10 = (unsigned char)174;
unsigned short var_11 = (unsigned short)31485;
int zero = 0;
signed char var_13 = (signed char)63;
long long int var_14 = -8320672094315439327LL;
unsigned short var_15 = (unsigned short)8555;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
