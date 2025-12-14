#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 865259881U;
unsigned short var_4 = (unsigned short)11304;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-21236;
unsigned char var_9 = (unsigned char)16;
int zero = 0;
int var_11 = -1700530417;
signed char var_12 = (signed char)-102;
void init() {
}

void checksum() {
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
