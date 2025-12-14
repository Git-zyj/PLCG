#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 190964160U;
long long int var_2 = -8703304758011031195LL;
short var_12 = (short)-19618;
unsigned short var_15 = (unsigned short)1534;
long long int var_16 = -1506148043907210661LL;
unsigned long long int var_18 = 15728206161404596344ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)58169;
unsigned short var_20 = (unsigned short)13421;
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
