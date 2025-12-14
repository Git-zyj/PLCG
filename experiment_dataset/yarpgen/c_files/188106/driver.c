#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15725866330405437554ULL;
int var_6 = 665306708;
unsigned char var_11 = (unsigned char)135;
unsigned short var_13 = (unsigned short)57170;
int zero = 0;
int var_15 = -2035117164;
unsigned long long int var_16 = 8409595070521940742ULL;
void init() {
}

void checksum() {
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
