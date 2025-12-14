#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
unsigned char var_2 = (unsigned char)254;
long long int var_4 = 7392752047160598496LL;
long long int var_6 = 3269622624831076829LL;
unsigned char var_7 = (unsigned char)211;
unsigned short var_10 = (unsigned short)36995;
long long int var_12 = -6688294694513973369LL;
unsigned char var_15 = (unsigned char)62;
int zero = 0;
unsigned char var_19 = (unsigned char)249;
unsigned char var_20 = (unsigned char)60;
signed char var_21 = (signed char)-102;
unsigned short var_22 = (unsigned short)7036;
unsigned short var_23 = (unsigned short)56234;
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
