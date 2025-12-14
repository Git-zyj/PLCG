#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)92;
unsigned short var_1 = (unsigned short)20497;
unsigned short var_8 = (unsigned short)6864;
int zero = 0;
signed char var_15 = (signed char)-4;
signed char var_16 = (signed char)98;
unsigned char var_17 = (unsigned char)77;
unsigned long long int var_18 = 9977380948503444932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
