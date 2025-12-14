#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62146;
long long int var_6 = 4232198827824959623LL;
long long int var_7 = -5993293766495382000LL;
short var_8 = (short)16595;
unsigned int var_10 = 2112493748U;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
unsigned char var_12 = (unsigned char)254;
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
