#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1315455784U;
unsigned short var_1 = (unsigned short)55973;
unsigned short var_2 = (unsigned short)32348;
unsigned int var_3 = 1132164764U;
int zero = 0;
unsigned short var_10 = (unsigned short)53295;
unsigned short var_11 = (unsigned short)44975;
unsigned int var_12 = 4154295160U;
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
