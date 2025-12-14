#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)93;
unsigned short var_7 = (unsigned short)63602;
unsigned char var_9 = (unsigned char)186;
unsigned char var_10 = (unsigned char)217;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
long long int var_16 = 7789369338227141480LL;
unsigned char var_17 = (unsigned char)218;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
