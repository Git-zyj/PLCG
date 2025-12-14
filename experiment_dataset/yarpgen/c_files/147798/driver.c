#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1787997013;
signed char var_3 = (signed char)-49;
signed char var_11 = (signed char)-90;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned int var_13 = 2164773359U;
short var_14 = (short)-12031;
int var_15 = 1648639001;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
