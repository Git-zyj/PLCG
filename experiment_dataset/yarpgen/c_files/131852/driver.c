#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5375188394427108812LL;
short var_2 = (short)-3841;
unsigned char var_4 = (unsigned char)163;
short var_5 = (short)-5224;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 2908441191U;
short var_14 = (short)16247;
long long int var_15 = 7277107259061083002LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
