#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
unsigned char var_3 = (unsigned char)229;
unsigned char var_5 = (unsigned char)68;
short var_7 = (short)28864;
short var_8 = (short)25202;
int var_9 = 494304118;
unsigned char var_10 = (unsigned char)116;
int zero = 0;
unsigned long long int var_13 = 1626001477481982369ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)27766;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
