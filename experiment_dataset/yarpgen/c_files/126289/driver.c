#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6347940289893412802LL;
unsigned short var_3 = (unsigned short)60466;
unsigned char var_6 = (unsigned char)31;
unsigned short var_10 = (unsigned short)36373;
unsigned short var_11 = (unsigned short)789;
long long int var_13 = -4612014580482172253LL;
int zero = 0;
unsigned short var_14 = (unsigned short)39795;
unsigned char var_15 = (unsigned char)63;
signed char var_16 = (signed char)-68;
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
