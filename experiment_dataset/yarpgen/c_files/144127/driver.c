#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 542631627;
long long int var_2 = -2272857902150433339LL;
int var_3 = -1409953629;
signed char var_4 = (signed char)-71;
long long int var_6 = -8196552619141719171LL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)132;
short var_11 = (short)-21833;
int zero = 0;
unsigned long long int var_12 = 14281559291902361212ULL;
unsigned short var_13 = (unsigned short)4973;
unsigned int var_14 = 1049126780U;
unsigned short var_15 = (unsigned short)53160;
short var_16 = (short)22945;
unsigned int var_17 = 2061199943U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
