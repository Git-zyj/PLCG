#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16911;
unsigned char var_3 = (unsigned char)176;
unsigned int var_4 = 3986137478U;
unsigned char var_5 = (unsigned char)34;
long long int var_7 = -393887964100826248LL;
signed char var_8 = (signed char)64;
short var_9 = (short)-13786;
unsigned short var_11 = (unsigned short)39676;
int var_12 = -671006495;
int zero = 0;
int var_15 = 1768321145;
unsigned char var_16 = (unsigned char)60;
void init() {
}

void checksum() {
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
