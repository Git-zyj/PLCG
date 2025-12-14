#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44738;
unsigned short var_1 = (unsigned short)11801;
unsigned short var_2 = (unsigned short)40492;
unsigned short var_4 = (unsigned short)19109;
unsigned short var_5 = (unsigned short)32771;
unsigned short var_6 = (unsigned short)14561;
unsigned short var_8 = (unsigned short)6473;
unsigned short var_9 = (unsigned short)30908;
unsigned short var_10 = (unsigned short)25428;
unsigned short var_11 = (unsigned short)63485;
unsigned short var_12 = (unsigned short)61803;
unsigned short var_13 = (unsigned short)8554;
unsigned short var_14 = (unsigned short)56457;
int zero = 0;
unsigned short var_15 = (unsigned short)38777;
unsigned short var_16 = (unsigned short)51657;
unsigned short var_17 = (unsigned short)63278;
unsigned short var_18 = (unsigned short)46967;
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
