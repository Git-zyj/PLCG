#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5113;
unsigned int var_3 = 4171674766U;
signed char var_4 = (signed char)-27;
unsigned char var_5 = (unsigned char)71;
int var_6 = -773361975;
short var_11 = (short)-21607;
int zero = 0;
unsigned int var_14 = 2265499621U;
unsigned char var_15 = (unsigned char)169;
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
