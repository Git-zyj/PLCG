#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079723940U;
unsigned int var_2 = 1142350402U;
unsigned char var_6 = (unsigned char)163;
int var_8 = 212253395;
unsigned int var_9 = 2590448859U;
unsigned int var_11 = 1913711561U;
unsigned long long int var_13 = 2133016112132917781ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -580880126988002569LL;
unsigned int var_17 = 3612942281U;
unsigned int var_18 = 1008159887U;
unsigned short var_19 = (unsigned short)31558;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
