#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15804;
int var_4 = 449997370;
int var_7 = -655677588;
int zero = 0;
unsigned char var_10 = (unsigned char)228;
unsigned int var_11 = 3686316941U;
unsigned long long int var_12 = 3988412960745812954ULL;
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
