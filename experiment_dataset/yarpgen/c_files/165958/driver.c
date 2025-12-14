#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5892083724098693265LL;
unsigned char var_6 = (unsigned char)60;
int var_7 = -1772128309;
unsigned short var_12 = (unsigned short)51050;
unsigned short var_14 = (unsigned short)49328;
int zero = 0;
short var_15 = (short)-8583;
unsigned long long int var_16 = 793972267735147595ULL;
long long int var_17 = -5196175174989902335LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
