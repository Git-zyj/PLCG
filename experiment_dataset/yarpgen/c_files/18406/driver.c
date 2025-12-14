#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13746;
signed char var_5 = (signed char)-122;
unsigned short var_11 = (unsigned short)17804;
int zero = 0;
unsigned long long int var_19 = 8456931716866584962ULL;
short var_20 = (short)-4933;
int var_21 = 33663058;
unsigned char var_22 = (unsigned char)141;
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
