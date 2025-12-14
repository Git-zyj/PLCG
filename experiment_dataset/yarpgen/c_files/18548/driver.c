#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34919;
int var_2 = -194382095;
unsigned short var_3 = (unsigned short)40748;
short var_4 = (short)12766;
int var_5 = 1938276007;
signed char var_7 = (signed char)-20;
unsigned char var_8 = (unsigned char)20;
short var_9 = (short)31761;
int zero = 0;
unsigned char var_10 = (unsigned char)85;
short var_11 = (short)-27707;
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
