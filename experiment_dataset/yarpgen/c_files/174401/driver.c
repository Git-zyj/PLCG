#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 297200728;
unsigned long long int var_7 = 8987351669294267000ULL;
signed char var_9 = (signed char)109;
_Bool var_11 = (_Bool)0;
int var_12 = 937812769;
int zero = 0;
unsigned char var_17 = (unsigned char)190;
int var_18 = -1299630665;
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
