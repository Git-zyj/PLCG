#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)54;
long long int var_3 = -7015647057716825585LL;
long long int var_6 = 3467434324405639290LL;
short var_7 = (short)6472;
long long int var_16 = 2420299286231432219LL;
unsigned long long int var_17 = 5352983115543934063ULL;
int zero = 0;
signed char var_19 = (signed char)127;
unsigned short var_20 = (unsigned short)50079;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
