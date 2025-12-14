#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-9;
long long int var_8 = 9062206877819495955LL;
signed char var_12 = (signed char)-86;
int var_13 = -1892825333;
int var_14 = 881699194;
int var_16 = 1463247002;
int zero = 0;
int var_18 = 1686876895;
unsigned char var_19 = (unsigned char)36;
unsigned short var_20 = (unsigned short)50149;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
