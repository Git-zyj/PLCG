#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 648286058U;
unsigned char var_7 = (unsigned char)54;
signed char var_8 = (signed char)98;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 121211697546528616ULL;
unsigned int var_17 = 1258451911U;
int zero = 0;
int var_18 = 762603536;
unsigned char var_19 = (unsigned char)16;
signed char var_20 = (signed char)110;
short var_21 = (short)-22170;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
