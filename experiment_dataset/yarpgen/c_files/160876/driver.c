#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6638655124713364752LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)22353;
short var_9 = (short)-26813;
unsigned long long int var_13 = 1809840967397348004ULL;
int zero = 0;
short var_18 = (short)14826;
short var_19 = (short)19029;
void init() {
}

void checksum() {
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
