#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1278488965534550767ULL;
unsigned short var_6 = (unsigned short)26844;
long long int var_8 = -7636232774252152661LL;
_Bool var_10 = (_Bool)1;
signed char var_18 = (signed char)32;
int zero = 0;
unsigned long long int var_20 = 6934827434676537606ULL;
long long int var_21 = 8829685073763213100LL;
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
