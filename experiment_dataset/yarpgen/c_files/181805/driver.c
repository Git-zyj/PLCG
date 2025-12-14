#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17064;
signed char var_2 = (signed char)-54;
long long int var_4 = 5856872732034387410LL;
unsigned int var_6 = 2519359902U;
unsigned int var_7 = 3845211272U;
unsigned short var_11 = (unsigned short)39074;
int zero = 0;
int var_14 = -236825403;
short var_15 = (short)-6651;
unsigned short var_16 = (unsigned short)53028;
void init() {
}

void checksum() {
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
