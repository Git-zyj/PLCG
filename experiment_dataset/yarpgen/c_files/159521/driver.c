#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10280465510240484953ULL;
unsigned char var_12 = (unsigned char)97;
long long int var_17 = -7321772487005307756LL;
int zero = 0;
unsigned long long int var_20 = 245417319391190747ULL;
unsigned long long int var_21 = 4266561321503089345ULL;
unsigned char var_22 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
