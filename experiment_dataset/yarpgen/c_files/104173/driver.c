#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15558;
unsigned long long int var_4 = 2143938932705817197ULL;
unsigned long long int var_6 = 15145222311495527793ULL;
unsigned short var_9 = (unsigned short)58263;
int zero = 0;
unsigned short var_10 = (unsigned short)21442;
unsigned long long int var_11 = 9742732660023015839ULL;
_Bool var_12 = (_Bool)0;
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
