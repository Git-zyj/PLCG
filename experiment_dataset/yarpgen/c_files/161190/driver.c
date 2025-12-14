#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4207;
short var_4 = (short)-29671;
long long int var_11 = 193083345728128742LL;
long long int var_13 = -1723430279253925349LL;
int zero = 0;
short var_15 = (short)14839;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4168657793601174153ULL;
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
