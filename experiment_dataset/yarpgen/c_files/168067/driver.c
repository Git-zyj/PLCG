#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1401563597U;
signed char var_8 = (signed char)4;
unsigned short var_10 = (unsigned short)64582;
unsigned long long int var_16 = 15621195909431913651ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)12552;
short var_20 = (short)28307;
signed char var_21 = (signed char)-55;
unsigned char var_22 = (unsigned char)61;
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
