#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-21;
short var_3 = (short)-10413;
short var_7 = (short)5499;
unsigned long long int var_8 = 3761583035925829985ULL;
int zero = 0;
long long int var_15 = -6663948941916644635LL;
signed char var_16 = (signed char)-105;
int var_17 = 1755733826;
unsigned short var_18 = (unsigned short)50988;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
