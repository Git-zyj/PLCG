#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)12082;
unsigned long long int var_4 = 16410208855748303908ULL;
long long int var_5 = 5066024903757931056LL;
unsigned long long int var_9 = 7352198785000330403ULL;
unsigned int var_11 = 531804273U;
long long int var_12 = -7451324348511118578LL;
short var_13 = (short)21304;
unsigned long long int var_14 = 16499301451000204113ULL;
unsigned int var_16 = 2346020838U;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-5019;
unsigned long long int var_19 = 4535094382993800229ULL;
void init() {
}

void checksum() {
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
