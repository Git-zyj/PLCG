#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8954149328296638334ULL;
signed char var_4 = (signed char)-99;
long long int var_9 = -6898021241009571533LL;
int zero = 0;
long long int var_18 = 2381555205224877901LL;
unsigned long long int var_19 = 1325791253682368575ULL;
unsigned long long int var_20 = 15971885482124901642ULL;
void init() {
}

void checksum() {
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
