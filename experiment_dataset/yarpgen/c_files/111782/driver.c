#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1798752132U;
unsigned long long int var_4 = 13895077012495710712ULL;
unsigned long long int var_5 = 15602102095304541673ULL;
unsigned char var_7 = (unsigned char)95;
int var_8 = -1746412812;
unsigned long long int var_11 = 11716349586549239864ULL;
short var_12 = (short)25008;
short var_13 = (short)-27631;
int zero = 0;
signed char var_17 = (signed char)56;
unsigned char var_18 = (unsigned char)238;
unsigned long long int var_19 = 4040986470197842501ULL;
unsigned char var_20 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
