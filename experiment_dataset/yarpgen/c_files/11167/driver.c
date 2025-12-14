#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)127;
int var_10 = 101102841;
unsigned int var_14 = 3889677360U;
unsigned int var_16 = 3639959351U;
int zero = 0;
int var_20 = 395727143;
long long int var_21 = -4692805791473773639LL;
void init() {
}

void checksum() {
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
