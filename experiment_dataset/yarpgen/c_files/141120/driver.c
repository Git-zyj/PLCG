#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1955812649;
unsigned short var_1 = (unsigned short)11102;
unsigned short var_3 = (unsigned short)2656;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)21448;
short var_10 = (short)360;
unsigned short var_11 = (unsigned short)59036;
int zero = 0;
unsigned char var_12 = (unsigned char)208;
_Bool var_13 = (_Bool)1;
long long int var_14 = -2323568125816243569LL;
unsigned char var_15 = (unsigned char)215;
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
