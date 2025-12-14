#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1436038396U;
short var_2 = (short)8247;
unsigned short var_3 = (unsigned short)34463;
unsigned long long int var_4 = 6245350244356205490ULL;
short var_6 = (short)19594;
short var_8 = (short)-25736;
unsigned short var_9 = (unsigned short)21353;
int zero = 0;
signed char var_10 = (signed char)70;
int var_11 = -668547422;
short var_12 = (short)-3056;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
