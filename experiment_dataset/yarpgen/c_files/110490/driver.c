#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 13307617165598158493ULL;
short var_7 = (short)10928;
unsigned char var_9 = (unsigned char)8;
int var_11 = 1417334176;
signed char var_15 = (signed char)104;
unsigned short var_19 = (unsigned short)28653;
int zero = 0;
short var_20 = (short)-24550;
_Bool var_21 = (_Bool)1;
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
