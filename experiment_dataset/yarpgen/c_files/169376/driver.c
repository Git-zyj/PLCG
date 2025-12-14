#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
long long int var_6 = 7930578381185916513LL;
unsigned long long int var_8 = 15259419131189375145ULL;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
unsigned char var_11 = (unsigned char)245;
int var_12 = -1310458349;
void init() {
}

void checksum() {
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
