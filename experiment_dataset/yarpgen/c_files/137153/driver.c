#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1203561471;
unsigned int var_10 = 3685626957U;
unsigned short var_15 = (unsigned short)7816;
unsigned int var_16 = 2462272283U;
int zero = 0;
int var_17 = 765788004;
int var_18 = -166896343;
unsigned char var_19 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
