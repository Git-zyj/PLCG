#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
unsigned int var_4 = 3377398255U;
unsigned short var_9 = (unsigned short)64093;
short var_10 = (short)17306;
int zero = 0;
unsigned char var_19 = (unsigned char)139;
short var_20 = (short)18932;
unsigned char var_21 = (unsigned char)152;
unsigned char var_22 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
