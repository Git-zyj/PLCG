#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6805814164057762469LL;
int var_3 = 1737629266;
unsigned char var_5 = (unsigned char)7;
unsigned char var_7 = (unsigned char)116;
unsigned short var_12 = (unsigned short)40141;
unsigned short var_15 = (unsigned short)26765;
int zero = 0;
unsigned long long int var_19 = 16183882404757900274ULL;
unsigned short var_20 = (unsigned short)52481;
unsigned int var_21 = 140608081U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
