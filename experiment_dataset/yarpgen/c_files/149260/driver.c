#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
unsigned char var_8 = (unsigned char)177;
short var_10 = (short)16975;
unsigned short var_18 = (unsigned short)8122;
int zero = 0;
unsigned char var_19 = (unsigned char)95;
unsigned char var_20 = (unsigned char)167;
unsigned char var_21 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
