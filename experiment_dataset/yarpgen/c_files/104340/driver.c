#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6941475971606753320LL;
unsigned char var_9 = (unsigned char)153;
unsigned char var_10 = (unsigned char)70;
int zero = 0;
long long int var_17 = -3244730139825989256LL;
long long int var_18 = -7912511505410881147LL;
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
