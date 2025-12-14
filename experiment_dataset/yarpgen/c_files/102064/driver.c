#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_17 = (unsigned short)4477;
unsigned long long int var_18 = 3292838731463784735ULL;
unsigned long long int var_19 = 2083266681570593012ULL;
int var_20 = -350456384;
short var_21 = (short)32452;
unsigned char var_22 = (unsigned char)208;
unsigned int var_23 = 1147863572U;
signed char var_24 = (signed char)-51;
int var_25 = -1002630001;
unsigned int var_26 = 2218472984U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
