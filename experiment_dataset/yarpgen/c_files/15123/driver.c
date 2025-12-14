#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9754;
unsigned short var_1 = (unsigned short)49160;
unsigned short var_2 = (unsigned short)37107;
unsigned short var_3 = (unsigned short)44296;
unsigned short var_5 = (unsigned short)56232;
unsigned short var_6 = (unsigned short)63531;
unsigned short var_7 = (unsigned short)16365;
unsigned short var_9 = (unsigned short)51461;
int zero = 0;
unsigned short var_10 = (unsigned short)64037;
unsigned short var_11 = (unsigned short)56781;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
