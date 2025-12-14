#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16461948377081446172ULL;
int var_10 = -1532600840;
unsigned long long int var_12 = 1617521615924322236ULL;
short var_15 = (short)-12277;
int zero = 0;
unsigned char var_20 = (unsigned char)229;
unsigned long long int var_21 = 3508701099778709951ULL;
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
