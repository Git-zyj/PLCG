#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
unsigned char var_2 = (unsigned char)156;
short var_3 = (short)-11875;
long long int var_8 = 7925194225787491248LL;
short var_13 = (short)2543;
int var_14 = -1089689104;
int zero = 0;
signed char var_15 = (signed char)113;
long long int var_16 = -7168844832091131332LL;
short var_17 = (short)-18;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
