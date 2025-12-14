#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 5872208358491582117LL;
unsigned long long int var_11 = 6287061667641707433ULL;
int var_12 = 425374888;
unsigned char var_18 = (unsigned char)32;
int zero = 0;
unsigned short var_19 = (unsigned short)16293;
short var_20 = (short)6683;
unsigned int var_21 = 3832161512U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
