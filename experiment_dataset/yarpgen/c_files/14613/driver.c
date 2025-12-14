#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)110;
unsigned long long int var_8 = 4660774054046782893ULL;
unsigned short var_10 = (unsigned short)119;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)41;
short var_17 = (short)-21943;
int zero = 0;
signed char var_19 = (signed char)-79;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)198;
int var_22 = 24560801;
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
