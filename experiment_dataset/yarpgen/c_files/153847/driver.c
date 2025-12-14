#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6275894036430110537LL;
unsigned int var_3 = 1942680545U;
unsigned char var_7 = (unsigned char)10;
unsigned int var_10 = 3582829307U;
int var_11 = -224834700;
short var_12 = (short)-2969;
int zero = 0;
unsigned long long int var_13 = 15713032605296372320ULL;
signed char var_14 = (signed char)-76;
unsigned char var_15 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
