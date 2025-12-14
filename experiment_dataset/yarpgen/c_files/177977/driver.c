#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)16717;
unsigned long long int var_6 = 13034947377653810054ULL;
int var_8 = -1786520421;
int var_9 = 1119925821;
int zero = 0;
unsigned long long int var_11 = 11202788794963127810ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 3783298136704543163ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
