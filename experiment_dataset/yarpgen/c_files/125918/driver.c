#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned int var_2 = 3949430868U;
unsigned char var_5 = (unsigned char)133;
unsigned short var_6 = (unsigned short)36555;
unsigned short var_7 = (unsigned short)40856;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
short var_13 = (short)3426;
unsigned short var_14 = (unsigned short)13039;
unsigned short var_15 = (unsigned short)3392;
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
