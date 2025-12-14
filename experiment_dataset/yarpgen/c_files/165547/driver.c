#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2145001010679005384LL;
long long int var_2 = 6270817648349820898LL;
_Bool var_6 = (_Bool)0;
long long int var_15 = 2057269811763236074LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-32736;
unsigned short var_18 = (unsigned short)43766;
unsigned long long int var_19 = 8688332732430935476ULL;
unsigned long long int var_20 = 7963927886976169636ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
