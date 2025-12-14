#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
unsigned char var_4 = (unsigned char)225;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)63363;
signed char var_10 = (signed char)-53;
unsigned int var_12 = 792589270U;
int zero = 0;
unsigned short var_13 = (unsigned short)63425;
unsigned int var_14 = 3019224028U;
unsigned short var_15 = (unsigned short)2080;
void init() {
}

void checksum() {
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
