#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1903735819;
unsigned long long int var_6 = 11571633368391382555ULL;
int zero = 0;
unsigned long long int var_11 = 4068433109518950372ULL;
unsigned short var_12 = (unsigned short)46439;
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
