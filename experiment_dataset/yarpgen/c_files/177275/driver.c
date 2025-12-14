#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4953;
unsigned short var_7 = (unsigned short)3369;
unsigned long long int var_11 = 11776472802460597335ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
unsigned long long int var_21 = 1199722971205082443ULL;
int var_22 = -1313668537;
unsigned long long int var_23 = 15512832616002325605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
