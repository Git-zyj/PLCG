#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25217;
short var_2 = (short)21598;
unsigned char var_3 = (unsigned char)32;
unsigned short var_7 = (unsigned short)54263;
unsigned char var_8 = (unsigned char)50;
long long int var_9 = -5768051455442816820LL;
short var_16 = (short)-5617;
int zero = 0;
signed char var_20 = (signed char)-96;
long long int var_21 = -9123005391101046814LL;
short var_22 = (short)7129;
unsigned int var_23 = 2873392329U;
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
