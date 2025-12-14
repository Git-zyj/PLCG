#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
_Bool var_2 = (_Bool)0;
long long int var_5 = -1053493695352151154LL;
unsigned short var_8 = (unsigned short)617;
int var_13 = 520010471;
int zero = 0;
long long int var_20 = -1183925450752867264LL;
long long int var_21 = -8870762107823367805LL;
void init() {
}

void checksum() {
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
