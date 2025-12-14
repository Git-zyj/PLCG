#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3266701359245477845LL;
unsigned long long int var_7 = 12642710737116828359ULL;
int var_8 = -1694796510;
unsigned int var_9 = 4079380715U;
unsigned short var_10 = (unsigned short)36956;
int var_12 = -1868822856;
short var_14 = (short)-1442;
int zero = 0;
unsigned char var_16 = (unsigned char)231;
unsigned short var_17 = (unsigned short)50204;
void init() {
}

void checksum() {
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
