#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4101888071U;
unsigned char var_6 = (unsigned char)180;
unsigned long long int var_7 = 15740110738462559853ULL;
unsigned char var_8 = (unsigned char)225;
unsigned short var_9 = (unsigned short)54113;
unsigned long long int var_10 = 4015345578169692823ULL;
int zero = 0;
signed char var_11 = (signed char)-14;
short var_12 = (short)14151;
int var_13 = -1526616646;
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
