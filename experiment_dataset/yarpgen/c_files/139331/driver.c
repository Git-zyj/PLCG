#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3504385398U;
unsigned int var_1 = 1097870545U;
unsigned int var_2 = 2189051557U;
unsigned int var_3 = 1005925347U;
unsigned int var_4 = 4274722766U;
unsigned short var_5 = (unsigned short)32066;
unsigned int var_6 = 1780596106U;
long long int var_7 = -5198232357142966401LL;
unsigned short var_9 = (unsigned short)8656;
int zero = 0;
unsigned int var_10 = 1463213729U;
long long int var_11 = 2392327057416258784LL;
short var_12 = (short)-32630;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
