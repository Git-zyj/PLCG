#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
short var_3 = (short)-1255;
unsigned long long int var_4 = 5944943994310882232ULL;
unsigned short var_5 = (unsigned short)34438;
short var_6 = (short)10326;
unsigned long long int var_9 = 15645013568265483948ULL;
int var_12 = -950994416;
short var_14 = (short)29471;
unsigned int var_16 = 2460753408U;
unsigned int var_17 = 2462984988U;
int zero = 0;
unsigned short var_18 = (unsigned short)27788;
int var_19 = -1471760706;
unsigned int var_20 = 735758738U;
void init() {
}

void checksum() {
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
