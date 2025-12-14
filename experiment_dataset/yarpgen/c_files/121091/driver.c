#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2667;
signed char var_4 = (signed char)127;
long long int var_6 = 1179632975021571203LL;
unsigned long long int var_7 = 13348990062707094768ULL;
unsigned long long int var_8 = 12555764396052043216ULL;
unsigned char var_9 = (unsigned char)182;
short var_12 = (short)-16861;
long long int var_13 = -8914750787140080208LL;
int zero = 0;
int var_14 = -182746038;
unsigned char var_15 = (unsigned char)208;
void init() {
}

void checksum() {
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
