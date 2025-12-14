#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)22528;
unsigned char var_7 = (unsigned char)105;
unsigned short var_8 = (unsigned short)61864;
unsigned short var_12 = (unsigned short)3105;
unsigned short var_14 = (unsigned short)1856;
unsigned char var_16 = (unsigned char)201;
int zero = 0;
unsigned char var_18 = (unsigned char)181;
unsigned int var_19 = 97542320U;
unsigned short var_20 = (unsigned short)13471;
unsigned short var_21 = (unsigned short)18401;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
