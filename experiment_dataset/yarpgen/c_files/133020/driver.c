#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10506;
unsigned short var_6 = (unsigned short)10803;
unsigned long long int var_7 = 5500422447853960724ULL;
short var_8 = (short)24284;
unsigned long long int var_10 = 1470872848244505600ULL;
int var_11 = 563666782;
long long int var_13 = 3939398657338931987LL;
int zero = 0;
unsigned short var_19 = (unsigned short)13196;
unsigned char var_20 = (unsigned char)229;
signed char var_21 = (signed char)94;
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
