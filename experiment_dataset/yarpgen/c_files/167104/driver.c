#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned short var_1 = (unsigned short)51109;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-10386;
unsigned int var_11 = 971615120U;
unsigned short var_16 = (unsigned short)17273;
int zero = 0;
long long int var_19 = 6844715618305957227LL;
unsigned short var_20 = (unsigned short)47429;
signed char var_21 = (signed char)7;
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
