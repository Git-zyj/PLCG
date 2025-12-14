#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 586895704;
unsigned char var_4 = (unsigned char)219;
unsigned long long int var_5 = 12301475378009703383ULL;
unsigned long long int var_6 = 12941067853160988192ULL;
int var_8 = -1695706750;
signed char var_10 = (signed char)-20;
_Bool var_13 = (_Bool)1;
long long int var_14 = -5710354885042746535LL;
int zero = 0;
unsigned long long int var_16 = 11696651428714219510ULL;
long long int var_17 = 6322981207568365134LL;
unsigned char var_18 = (unsigned char)164;
void init() {
}

void checksum() {
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
