#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 9133078454289048033LL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)5244;
short var_7 = (short)-2104;
long long int var_8 = -1793544499168369566LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 7380435364519394088ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)29468;
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
