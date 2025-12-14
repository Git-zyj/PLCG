#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned short var_1 = (unsigned short)30307;
unsigned int var_2 = 1346486527U;
unsigned short var_3 = (unsigned short)18472;
signed char var_4 = (signed char)21;
unsigned int var_6 = 4060639236U;
long long int var_9 = 3055468553640018317LL;
int zero = 0;
short var_10 = (short)17414;
unsigned char var_11 = (unsigned char)192;
int var_12 = -72125889;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
