#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
short var_1 = (short)15872;
short var_2 = (short)14041;
signed char var_5 = (signed char)10;
short var_7 = (short)-7452;
long long int var_8 = -1142292439676636738LL;
int var_9 = 976129719;
unsigned short var_11 = (unsigned short)11016;
unsigned long long int var_13 = 5838344327179476185ULL;
signed char var_14 = (signed char)-88;
unsigned char var_16 = (unsigned char)58;
short var_18 = (short)-16979;
int zero = 0;
unsigned short var_19 = (unsigned short)65503;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2829135910U;
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
