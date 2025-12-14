#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1252143716490122701ULL;
unsigned long long int var_5 = 9013831494313534757ULL;
signed char var_6 = (signed char)-6;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
unsigned int var_13 = 3848129836U;
void init() {
}

void checksum() {
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
