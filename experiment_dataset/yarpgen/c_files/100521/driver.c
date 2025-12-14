#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4052982726881098879LL;
long long int var_3 = -8817972796912196194LL;
unsigned int var_5 = 4217114011U;
unsigned int var_6 = 2038827467U;
long long int var_7 = -1854121792731323039LL;
unsigned char var_8 = (unsigned char)86;
int zero = 0;
unsigned int var_10 = 1141888447U;
unsigned short var_11 = (unsigned short)27695;
unsigned short var_12 = (unsigned short)78;
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
