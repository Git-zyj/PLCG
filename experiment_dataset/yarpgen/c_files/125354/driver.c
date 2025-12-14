#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20936;
unsigned long long int var_4 = 9776590232713528430ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)69;
unsigned long long int var_16 = 3157628950904422697ULL;
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
