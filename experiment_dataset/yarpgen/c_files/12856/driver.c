#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2445278493625812299LL;
unsigned char var_3 = (unsigned char)235;
unsigned int var_5 = 22838691U;
unsigned short var_9 = (unsigned short)17549;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)188;
unsigned short var_16 = (unsigned short)27256;
int zero = 0;
unsigned char var_18 = (unsigned char)16;
unsigned char var_19 = (unsigned char)63;
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
