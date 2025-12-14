#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1782280319;
short var_3 = (short)-14820;
unsigned long long int var_6 = 12017207650812944313ULL;
unsigned long long int var_7 = 14865930959986775276ULL;
unsigned char var_8 = (unsigned char)160;
short var_11 = (short)-6921;
long long int var_15 = -2753915240115002125LL;
int zero = 0;
unsigned short var_17 = (unsigned short)54310;
unsigned short var_18 = (unsigned short)49801;
int var_19 = -1751376372;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
