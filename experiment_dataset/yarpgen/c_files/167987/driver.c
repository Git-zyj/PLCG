#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26923;
unsigned short var_1 = (unsigned short)11590;
unsigned long long int var_2 = 9493794663049929385ULL;
unsigned short var_4 = (unsigned short)48188;
signed char var_6 = (signed char)109;
short var_8 = (short)-26742;
unsigned short var_9 = (unsigned short)43938;
int var_10 = -1304615657;
int zero = 0;
unsigned long long int var_11 = 10152373227347068964ULL;
unsigned int var_12 = 291184832U;
short var_13 = (short)30887;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
