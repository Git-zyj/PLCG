#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)20243;
unsigned short var_7 = (unsigned short)53295;
unsigned long long int var_8 = 17141979532743963598ULL;
signed char var_10 = (signed char)-47;
unsigned char var_11 = (unsigned char)207;
short var_14 = (short)25267;
int zero = 0;
unsigned char var_16 = (unsigned char)240;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)10964;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
