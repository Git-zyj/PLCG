#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
unsigned long long int var_3 = 15649383572888142582ULL;
unsigned long long int var_5 = 9275294785880274697ULL;
int zero = 0;
unsigned long long int var_11 = 277669459092520906ULL;
unsigned long long int var_12 = 3118608123628660620ULL;
unsigned long long int var_13 = 11099996486630287181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
