#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)467;
unsigned char var_1 = (unsigned char)64;
unsigned int var_2 = 1207130729U;
unsigned int var_3 = 1991297609U;
short var_4 = (short)-15068;
unsigned long long int var_8 = 9228708379403168209ULL;
unsigned int var_10 = 1599572580U;
unsigned int var_12 = 3282809671U;
int zero = 0;
unsigned long long int var_17 = 5857304338201454183ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
