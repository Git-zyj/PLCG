#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3203462025U;
short var_4 = (short)-16547;
int var_8 = 63518132;
short var_12 = (short)21463;
unsigned char var_14 = (unsigned char)1;
int var_15 = -1709779883;
int zero = 0;
long long int var_18 = 1301386477952055843LL;
short var_19 = (short)533;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
