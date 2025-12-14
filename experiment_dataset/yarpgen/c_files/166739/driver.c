#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6355352444013149130LL;
int var_2 = 708386339;
unsigned long long int var_4 = 14254268651882567684ULL;
long long int var_6 = -7098667461413474091LL;
int zero = 0;
unsigned short var_10 = (unsigned short)52574;
unsigned char var_11 = (unsigned char)12;
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
