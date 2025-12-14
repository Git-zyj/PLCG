#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18713;
unsigned short var_2 = (unsigned short)10635;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)224;
unsigned char var_12 = (unsigned char)216;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 907159976U;
unsigned short var_18 = (unsigned short)2588;
signed char var_19 = (signed char)7;
unsigned long long int var_20 = 10376316574227870604ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
