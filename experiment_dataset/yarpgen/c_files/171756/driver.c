#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)134;
long long int var_2 = -5794045250481709144LL;
unsigned char var_3 = (unsigned char)187;
int var_7 = 1994085749;
short var_8 = (short)17781;
unsigned int var_11 = 2927020302U;
int zero = 0;
unsigned int var_13 = 3773016348U;
short var_14 = (short)-63;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
