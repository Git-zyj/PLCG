#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)103;
int var_5 = 1176892808;
signed char var_7 = (signed char)-90;
long long int var_14 = -3786230844817330242LL;
unsigned short var_17 = (unsigned short)50453;
int zero = 0;
int var_19 = -1361997310;
short var_20 = (short)2567;
signed char var_21 = (signed char)81;
void init() {
}

void checksum() {
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
