#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1779351955335200644ULL;
long long int var_13 = -7609586901038718997LL;
int zero = 0;
unsigned long long int var_20 = 16860329456821224840ULL;
unsigned long long int var_21 = 15640998378226728018ULL;
long long int var_22 = 4948404547431433089LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
