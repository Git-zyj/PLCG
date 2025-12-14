#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4160886641440243255ULL;
unsigned char var_5 = (unsigned char)53;
unsigned char var_7 = (unsigned char)212;
int zero = 0;
long long int var_19 = -8856935920883876015LL;
short var_20 = (short)-18850;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
