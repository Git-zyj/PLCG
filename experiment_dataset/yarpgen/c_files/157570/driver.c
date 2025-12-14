#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)187;
signed char var_3 = (signed char)46;
unsigned short var_4 = (unsigned short)63567;
unsigned short var_6 = (unsigned short)30978;
unsigned long long int var_7 = 5567337779623491571ULL;
int zero = 0;
signed char var_11 = (signed char)-51;
unsigned long long int var_12 = 7740857761715471856ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 1673701084;
unsigned char var_15 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
