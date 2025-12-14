#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32010;
_Bool var_4 = (_Bool)1;
short var_6 = (short)15161;
unsigned char var_7 = (unsigned char)214;
short var_9 = (short)-3321;
int zero = 0;
signed char var_10 = (signed char)-125;
unsigned long long int var_11 = 1833138017505891407ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
