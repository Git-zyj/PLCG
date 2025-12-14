#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-21957;
signed char var_3 = (signed char)-122;
unsigned char var_4 = (unsigned char)190;
unsigned long long int var_6 = 4472802602663175482ULL;
signed char var_7 = (signed char)101;
unsigned int var_8 = 2127730534U;
long long int var_9 = -3354764320099757325LL;
unsigned short var_11 = (unsigned short)8439;
int zero = 0;
unsigned int var_13 = 3859735594U;
int var_14 = 838919807;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
