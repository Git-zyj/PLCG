#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)46756;
unsigned char var_7 = (unsigned char)146;
short var_9 = (short)20784;
unsigned char var_18 = (unsigned char)108;
int zero = 0;
int var_19 = 462846289;
unsigned short var_20 = (unsigned short)22307;
long long int var_21 = 1608508801905191346LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
