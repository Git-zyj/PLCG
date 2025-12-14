#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22939;
int var_2 = 943892278;
int var_3 = 1771981999;
short var_4 = (short)-19040;
short var_5 = (short)23669;
int var_6 = 1419093958;
unsigned long long int var_7 = 2007972427061174782ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8379391418841445433ULL;
int zero = 0;
signed char var_10 = (signed char)105;
unsigned int var_11 = 717744626U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
