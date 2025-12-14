#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1304232843;
_Bool var_13 = (_Bool)1;
unsigned char var_15 = (unsigned char)242;
unsigned int var_17 = 3373601249U;
short var_18 = (short)-10862;
unsigned long long int var_19 = 8778428865091620724ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
unsigned short var_21 = (unsigned short)39164;
void init() {
}

void checksum() {
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
