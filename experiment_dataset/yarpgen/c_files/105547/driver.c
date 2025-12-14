#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1366077746;
unsigned short var_5 = (unsigned short)26443;
long long int var_6 = 8104658803631081712LL;
int zero = 0;
signed char var_19 = (signed char)-64;
signed char var_20 = (signed char)-116;
int var_21 = -1078087605;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
