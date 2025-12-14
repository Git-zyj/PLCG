#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
unsigned char var_1 = (unsigned char)229;
short var_9 = (short)5556;
int zero = 0;
short var_12 = (short)20452;
long long int var_13 = -1570654831805332160LL;
short var_14 = (short)-9864;
unsigned short var_15 = (unsigned short)62665;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
