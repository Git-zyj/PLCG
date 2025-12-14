#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)226;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 796458854339617841ULL;
int var_9 = -575204248;
unsigned short var_13 = (unsigned short)24838;
int zero = 0;
int var_16 = 670854910;
unsigned char var_17 = (unsigned char)200;
unsigned short var_18 = (unsigned short)56347;
signed char var_19 = (signed char)106;
_Bool var_20 = (_Bool)0;
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
