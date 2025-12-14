#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned char var_9 = (unsigned char)68;
unsigned char var_12 = (unsigned char)235;
unsigned short var_16 = (unsigned short)19511;
int zero = 0;
unsigned long long int var_18 = 5518271604813569795ULL;
int var_19 = 1796344926;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
