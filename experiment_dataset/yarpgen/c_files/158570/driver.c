#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 415113081U;
unsigned char var_5 = (unsigned char)120;
unsigned int var_9 = 1743146334U;
unsigned char var_17 = (unsigned char)39;
int zero = 0;
unsigned char var_19 = (unsigned char)136;
unsigned char var_20 = (unsigned char)126;
unsigned char var_21 = (unsigned char)70;
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
