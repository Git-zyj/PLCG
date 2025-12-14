#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
int var_3 = 7838446;
unsigned char var_4 = (unsigned char)13;
unsigned char var_7 = (unsigned char)45;
int var_8 = 1123271630;
unsigned char var_9 = (unsigned char)78;
int zero = 0;
int var_10 = -293313978;
unsigned char var_11 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
