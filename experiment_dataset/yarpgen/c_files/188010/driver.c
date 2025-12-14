#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9149442990388875379ULL;
signed char var_1 = (signed char)-24;
unsigned char var_2 = (unsigned char)195;
signed char var_8 = (signed char)105;
short var_10 = (short)-96;
int zero = 0;
unsigned char var_12 = (unsigned char)126;
signed char var_13 = (signed char)21;
unsigned short var_14 = (unsigned short)16006;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
