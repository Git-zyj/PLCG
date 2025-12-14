#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1169469004;
unsigned short var_4 = (unsigned short)47853;
unsigned char var_12 = (unsigned char)141;
int zero = 0;
int var_14 = 1166899428;
signed char var_15 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
