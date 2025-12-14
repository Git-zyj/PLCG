#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4342858763753663004LL;
short var_4 = (short)-32142;
unsigned int var_5 = 180668443U;
unsigned char var_12 = (unsigned char)38;
int zero = 0;
unsigned long long int var_19 = 12379801803369925027ULL;
int var_20 = 1368689891;
void init() {
}

void checksum() {
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
