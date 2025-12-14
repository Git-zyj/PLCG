#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)248;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 17080582123862447447ULL;
int var_5 = 1774261205;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-13806;
signed char var_8 = (signed char)11;
unsigned char var_9 = (unsigned char)124;
unsigned short var_11 = (unsigned short)62129;
int zero = 0;
signed char var_12 = (signed char)-72;
unsigned char var_13 = (unsigned char)206;
signed char var_14 = (signed char)-104;
short var_15 = (short)-12618;
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
