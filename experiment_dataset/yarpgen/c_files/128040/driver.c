#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11015;
unsigned short var_10 = (unsigned short)17346;
int var_12 = -821623896;
unsigned short var_17 = (unsigned short)5068;
int zero = 0;
unsigned int var_19 = 4176501078U;
unsigned short var_20 = (unsigned short)13083;
void init() {
}

void checksum() {
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
