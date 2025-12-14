#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62886;
unsigned char var_3 = (unsigned char)64;
unsigned short var_4 = (unsigned short)23070;
long long int var_8 = -6542919895345177035LL;
int zero = 0;
unsigned char var_17 = (unsigned char)156;
signed char var_18 = (signed char)-114;
unsigned long long int var_19 = 14226597740794171633ULL;
short var_20 = (short)29952;
long long int var_21 = 5442139486579220258LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
