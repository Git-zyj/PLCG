#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1089739601;
unsigned char var_4 = (unsigned char)203;
unsigned short var_7 = (unsigned short)38780;
long long int var_11 = 2470948311645876657LL;
int zero = 0;
signed char var_12 = (signed char)65;
unsigned short var_13 = (unsigned short)23524;
void init() {
}

void checksum() {
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
