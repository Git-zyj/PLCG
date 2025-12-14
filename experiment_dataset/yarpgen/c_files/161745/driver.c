#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)169;
long long int var_7 = 2264816217324744974LL;
unsigned short var_8 = (unsigned short)3604;
int zero = 0;
unsigned int var_11 = 2991112589U;
int var_12 = 1789955460;
unsigned int var_13 = 2311777695U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
