#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)55;
unsigned char var_10 = (unsigned char)0;
signed char var_11 = (signed char)77;
int zero = 0;
long long int var_12 = 2424515880957318064LL;
unsigned char var_13 = (unsigned char)210;
long long int var_14 = -458952469065152594LL;
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
