#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1495369136373520908LL;
unsigned long long int var_6 = 11044436124042687875ULL;
unsigned char var_7 = (unsigned char)90;
signed char var_8 = (signed char)77;
int zero = 0;
short var_15 = (short)-20919;
int var_16 = 2060380167;
void init() {
}

void checksum() {
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
