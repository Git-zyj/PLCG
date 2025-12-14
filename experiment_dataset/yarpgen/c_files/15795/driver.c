#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
unsigned long long int var_4 = 5511010942960628055ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 512155411;
short var_7 = (short)13977;
signed char var_9 = (signed char)11;
signed char var_11 = (signed char)110;
int var_13 = -706140076;
short var_14 = (short)20887;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)28727;
short var_17 = (short)-16573;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
