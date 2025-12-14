#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-9538;
short var_8 = (short)-26597;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 185583231688787279ULL;
unsigned long long int var_12 = 8399589120859744881ULL;
unsigned int var_13 = 3790046248U;
unsigned char var_16 = (unsigned char)150;
short var_17 = (short)21374;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)32515;
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
