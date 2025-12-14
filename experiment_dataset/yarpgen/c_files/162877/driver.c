#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25230;
unsigned short var_3 = (unsigned short)64138;
long long int var_4 = 4997640213813971359LL;
unsigned short var_5 = (unsigned short)49225;
unsigned long long int var_8 = 9174459971558976345ULL;
unsigned short var_9 = (unsigned short)59102;
int zero = 0;
unsigned int var_11 = 1901270388U;
long long int var_12 = -3249611387633931933LL;
long long int var_13 = 1609539222055700852LL;
int var_14 = 133731022;
unsigned long long int var_15 = 5593686360485496858ULL;
unsigned char var_16 = (unsigned char)71;
unsigned char var_17 = (unsigned char)48;
short arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-5818;
}

void checksum() {
    hash(&seed, var_11);
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
