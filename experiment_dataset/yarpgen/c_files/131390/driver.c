#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)1;
unsigned short var_3 = (unsigned short)33281;
short var_7 = (short)-19529;
short var_8 = (short)18930;
unsigned long long int var_9 = 800497483208390606ULL;
unsigned long long int var_10 = 9712844054902678718ULL;
short var_11 = (short)16481;
unsigned int var_13 = 1007067990U;
signed char var_15 = (signed char)20;
long long int var_16 = -1634238678779290338LL;
unsigned short var_17 = (unsigned short)3361;
int zero = 0;
unsigned long long int var_19 = 3104264780105381834ULL;
int var_20 = 1562800034;
int var_21 = -1490410071;
short var_22 = (short)-29500;
unsigned short var_23 = (unsigned short)10341;
short var_24 = (short)-1353;
signed char var_25 = (signed char)74;
long long int var_26 = 4904430073484711769LL;
int var_27 = 229456800;
unsigned char var_28 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
