#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)228;
short var_4 = (short)-28885;
signed char var_6 = (signed char)13;
short var_8 = (short)28203;
unsigned long long int var_11 = 13161673426428818420ULL;
unsigned long long int var_12 = 4427917319836025380ULL;
unsigned short var_14 = (unsigned short)6521;
long long int var_15 = -5941288446909228875LL;
int zero = 0;
signed char var_17 = (signed char)-107;
unsigned short var_18 = (unsigned short)42472;
unsigned short var_19 = (unsigned short)55805;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
