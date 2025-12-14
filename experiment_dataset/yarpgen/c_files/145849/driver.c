#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5622;
unsigned char var_4 = (unsigned char)185;
short var_6 = (short)-4240;
int var_8 = -1561505789;
signed char var_11 = (signed char)-44;
int zero = 0;
unsigned char var_12 = (unsigned char)55;
unsigned short var_13 = (unsigned short)64202;
int var_14 = -810472988;
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
