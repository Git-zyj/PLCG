#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38213;
unsigned long long int var_1 = 3255294407851715836ULL;
signed char var_3 = (signed char)-12;
unsigned short var_8 = (unsigned short)43077;
long long int var_9 = 7600242795620795753LL;
unsigned char var_11 = (unsigned char)241;
int var_12 = -1557201018;
signed char var_15 = (signed char)16;
unsigned short var_16 = (unsigned short)21787;
unsigned short var_18 = (unsigned short)41220;
int zero = 0;
unsigned long long int var_19 = 15338827771393228735ULL;
unsigned long long int var_20 = 2967974108162658319ULL;
unsigned long long int var_21 = 12262276911030150672ULL;
unsigned short var_22 = (unsigned short)44809;
int var_23 = 774913607;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
