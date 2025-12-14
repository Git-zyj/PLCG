#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52257;
unsigned long long int var_4 = 3256258195324374289ULL;
unsigned char var_9 = (unsigned char)194;
int zero = 0;
unsigned char var_10 = (unsigned char)219;
unsigned short var_11 = (unsigned short)40107;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
