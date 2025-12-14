#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2046998492;
unsigned short var_5 = (unsigned short)4922;
signed char var_6 = (signed char)63;
long long int var_8 = -8653723174788697791LL;
int var_11 = 1028105792;
int var_12 = -2008383654;
signed char var_15 = (signed char)-71;
int zero = 0;
long long int var_16 = -2749648888076594703LL;
unsigned short var_17 = (unsigned short)13583;
unsigned int var_18 = 4207656327U;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 1731998684634397379ULL;
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
