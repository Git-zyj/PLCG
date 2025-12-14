#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21560;
short var_3 = (short)6282;
unsigned char var_4 = (unsigned char)177;
unsigned short var_11 = (unsigned short)34600;
int zero = 0;
unsigned char var_12 = (unsigned char)36;
short var_13 = (short)4398;
unsigned long long int var_14 = 17654303330823728230ULL;
unsigned short var_15 = (unsigned short)24380;
long long int var_16 = 657250427816064401LL;
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
