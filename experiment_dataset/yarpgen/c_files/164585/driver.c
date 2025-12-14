#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -423208997;
unsigned char var_1 = (unsigned char)252;
signed char var_3 = (signed char)117;
_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)76;
signed char var_15 = (signed char)-2;
int var_18 = 54084169;
int zero = 0;
unsigned char var_19 = (unsigned char)194;
unsigned long long int var_20 = 10705149756569642449ULL;
unsigned char var_21 = (unsigned char)133;
short var_22 = (short)-10270;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
