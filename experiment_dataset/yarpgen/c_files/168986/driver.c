#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23678;
short var_5 = (short)-1504;
signed char var_7 = (signed char)-8;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)11;
unsigned int var_14 = 3051065676U;
_Bool var_15 = (_Bool)1;
int var_19 = 1315165427;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 1823233088499827081ULL;
unsigned long long int var_22 = 13464351551009231477ULL;
short var_23 = (short)16737;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
