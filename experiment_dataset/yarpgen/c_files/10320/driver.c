#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7745884909261760557LL;
int var_3 = -357991984;
unsigned int var_4 = 371364368U;
int zero = 0;
signed char var_10 = (signed char)121;
unsigned char var_11 = (unsigned char)27;
unsigned char var_12 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
