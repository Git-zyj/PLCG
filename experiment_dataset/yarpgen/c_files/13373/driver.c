#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58853;
long long int var_2 = -4984820498980177346LL;
unsigned long long int var_4 = 9147287527230888689ULL;
unsigned short var_6 = (unsigned short)4777;
unsigned char var_8 = (unsigned char)34;
short var_10 = (short)18414;
unsigned short var_11 = (unsigned short)18173;
int zero = 0;
signed char var_12 = (signed char)42;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-20;
int var_15 = -1535998812;
_Bool var_16 = (_Bool)0;
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
