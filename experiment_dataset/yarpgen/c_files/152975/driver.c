#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4899225729757321871LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5898397207132089760LL;
int zero = 0;
signed char var_20 = (signed char)-107;
unsigned long long int var_21 = 11577088775372095328ULL;
long long int var_22 = 3681498066511076030LL;
_Bool var_23 = (_Bool)0;
long long int var_24 = -1920156148076050767LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
