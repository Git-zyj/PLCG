#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)55303;
unsigned char var_7 = (unsigned char)147;
unsigned short var_9 = (unsigned short)33083;
int zero = 0;
unsigned long long int var_11 = 15141795382533394440ULL;
signed char var_12 = (signed char)-109;
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
