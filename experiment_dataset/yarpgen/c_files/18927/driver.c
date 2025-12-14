#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24838;
unsigned short var_1 = (unsigned short)32723;
unsigned short var_2 = (unsigned short)43476;
unsigned short var_3 = (unsigned short)23572;
unsigned short var_6 = (unsigned short)21404;
unsigned short var_7 = (unsigned short)60324;
unsigned short var_8 = (unsigned short)30670;
unsigned short var_10 = (unsigned short)50856;
unsigned short var_11 = (unsigned short)38151;
int zero = 0;
unsigned short var_12 = (unsigned short)30674;
unsigned short var_13 = (unsigned short)60441;
unsigned short var_14 = (unsigned short)65159;
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
