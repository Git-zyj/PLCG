#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1302085181;
unsigned short var_2 = (unsigned short)41380;
long long int var_3 = 710763942263781775LL;
long long int var_6 = 8186740990309453450LL;
long long int var_7 = -3988944450746322702LL;
int var_9 = 281665428;
int zero = 0;
unsigned short var_10 = (unsigned short)40395;
unsigned short var_11 = (unsigned short)37807;
unsigned short var_12 = (unsigned short)51208;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
