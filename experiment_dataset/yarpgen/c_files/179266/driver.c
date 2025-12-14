#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned char var_2 = (unsigned char)46;
unsigned long long int var_11 = 10480638894434979456ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)27;
unsigned long long int var_15 = 9623047067743747799ULL;
unsigned long long int var_16 = 6562614365449366832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
