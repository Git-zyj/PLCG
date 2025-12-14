#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43759;
int var_1 = -14965179;
unsigned char var_8 = (unsigned char)7;
unsigned long long int var_9 = 8756453384715557918ULL;
signed char var_12 = (signed char)80;
long long int var_13 = -6636602995579197645LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)37;
unsigned long long int var_16 = 16952464044062442683ULL;
unsigned char var_17 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
