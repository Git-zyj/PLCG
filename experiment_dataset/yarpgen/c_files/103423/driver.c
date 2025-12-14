#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 699698261962888789LL;
unsigned int var_5 = 892904868U;
signed char var_7 = (signed char)116;
unsigned long long int var_8 = 10676220730887600713ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)53364;
short var_11 = (short)-27559;
unsigned char var_12 = (unsigned char)153;
int zero = 0;
unsigned short var_13 = (unsigned short)886;
short var_14 = (short)-10721;
unsigned short var_15 = (unsigned short)24750;
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
