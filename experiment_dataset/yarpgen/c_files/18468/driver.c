#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)4661;
int var_6 = 663107080;
unsigned long long int var_8 = 12546006545647371528ULL;
short var_17 = (short)-19790;
signed char var_18 = (signed char)-27;
unsigned char var_19 = (unsigned char)17;
int zero = 0;
int var_20 = 1459129304;
unsigned char var_21 = (unsigned char)132;
unsigned long long int var_22 = 9520440171345784362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
