#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5491349931423170028LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)13660;
unsigned long long int var_10 = 12152076730535868154ULL;
short var_11 = (short)10509;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 8957669067876361121LL;
unsigned long long int var_15 = 9351185213850810000ULL;
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
