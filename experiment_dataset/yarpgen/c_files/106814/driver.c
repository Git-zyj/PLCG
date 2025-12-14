#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_6 = (short)18235;
_Bool var_8 = (_Bool)1;
int var_13 = -578626038;
unsigned int var_16 = 204895866U;
signed char var_18 = (signed char)-111;
int zero = 0;
long long int var_20 = -1507360899947106474LL;
short var_21 = (short)-27167;
unsigned short var_22 = (unsigned short)62520;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
