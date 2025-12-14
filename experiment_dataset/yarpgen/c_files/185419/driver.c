#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)5733;
unsigned short var_9 = (unsigned short)12262;
unsigned short var_10 = (unsigned short)45514;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)61312;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8866021510734744853LL;
unsigned short var_18 = (unsigned short)19010;
unsigned short var_19 = (unsigned short)61981;
long long int var_20 = 8199702013862292287LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
