#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22428;
unsigned short var_3 = (unsigned short)26327;
long long int var_4 = -8807277363738616292LL;
unsigned int var_6 = 2283333251U;
short var_7 = (short)-10827;
long long int var_8 = -3652718505918595325LL;
unsigned int var_9 = 2745638593U;
unsigned short var_10 = (unsigned short)2157;
int var_11 = 1405812624;
int zero = 0;
int var_12 = 358886329;
short var_13 = (short)26332;
long long int var_14 = 6987473566803018997LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
