#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20999;
long long int var_5 = -5198816124309424644LL;
long long int var_6 = 435393834478685720LL;
short var_7 = (short)-13982;
unsigned char var_8 = (unsigned char)162;
unsigned char var_9 = (unsigned char)240;
int zero = 0;
unsigned char var_12 = (unsigned char)249;
unsigned char var_13 = (unsigned char)72;
signed char var_14 = (signed char)-43;
unsigned char var_15 = (unsigned char)170;
signed char var_16 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
