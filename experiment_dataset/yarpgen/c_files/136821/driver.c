#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35227;
unsigned int var_1 = 233975747U;
unsigned short var_3 = (unsigned short)59300;
long long int var_6 = 4443998940072129242LL;
unsigned short var_10 = (unsigned short)536;
int zero = 0;
unsigned char var_14 = (unsigned char)138;
int var_15 = -228909957;
unsigned int var_16 = 1489536401U;
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
