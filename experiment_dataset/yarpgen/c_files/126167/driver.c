#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
unsigned int var_2 = 3123862396U;
unsigned int var_3 = 1522470609U;
unsigned int var_7 = 1275572529U;
int var_8 = 270342381;
int zero = 0;
unsigned short var_11 = (unsigned short)53981;
unsigned int var_12 = 2892703973U;
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
