#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)0;
unsigned short var_3 = (unsigned short)40168;
unsigned long long int var_4 = 5480620295806721838ULL;
short var_5 = (short)-11115;
unsigned long long int var_6 = 16097352203723933038ULL;
unsigned char var_7 = (unsigned char)38;
short var_8 = (short)-18603;
unsigned long long int var_9 = 16573589035540315729ULL;
int zero = 0;
unsigned int var_10 = 1670630212U;
unsigned long long int var_11 = 6410274705609591456ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
