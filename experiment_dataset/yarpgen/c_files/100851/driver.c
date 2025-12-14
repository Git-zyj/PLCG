#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6393094280232682869ULL;
unsigned long long int var_2 = 7848070405409209180ULL;
unsigned short var_3 = (unsigned short)38168;
unsigned long long int var_4 = 14081585109152215695ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)11272;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_14 = (short)-30348;
unsigned short var_15 = (unsigned short)2647;
unsigned int var_16 = 433401278U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
