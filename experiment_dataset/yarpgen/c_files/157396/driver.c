#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12167;
unsigned short var_1 = (unsigned short)56940;
short var_4 = (short)18428;
unsigned short var_5 = (unsigned short)49137;
short var_7 = (short)32056;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7482123509653309391ULL;
unsigned long long int var_19 = 4770791959433636698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
