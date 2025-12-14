#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1469309574;
unsigned short var_2 = (unsigned short)40230;
unsigned char var_3 = (unsigned char)20;
unsigned long long int var_6 = 18161187876757754386ULL;
int var_7 = -843283147;
int var_8 = -1785661751;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-76;
unsigned short var_14 = (unsigned short)37551;
unsigned char var_15 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
