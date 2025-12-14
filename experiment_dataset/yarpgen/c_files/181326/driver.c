#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)27;
unsigned long long int var_9 = 5771970214322152256ULL;
unsigned char var_17 = (unsigned char)95;
int zero = 0;
unsigned char var_19 = (unsigned char)197;
unsigned char var_20 = (unsigned char)16;
int var_21 = -1659747422;
unsigned short var_22 = (unsigned short)27949;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
