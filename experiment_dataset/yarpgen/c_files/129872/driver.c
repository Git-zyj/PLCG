#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11226377064760356958ULL;
unsigned char var_4 = (unsigned char)224;
unsigned long long int var_8 = 6167532163854085710ULL;
unsigned short var_9 = (unsigned short)31600;
short var_15 = (short)-11304;
int zero = 0;
unsigned char var_19 = (unsigned char)239;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)20052;
unsigned long long int var_22 = 15441414231389282630ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
