#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)243;
unsigned short var_5 = (unsigned short)11208;
unsigned char var_6 = (unsigned char)235;
short var_10 = (short)13090;
int zero = 0;
int var_11 = -1070635075;
int var_12 = -723966757;
long long int var_13 = 7643639804062998657LL;
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
