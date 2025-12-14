#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1131369143;
int var_2 = 467929020;
short var_3 = (short)-22249;
short var_7 = (short)24230;
unsigned short var_11 = (unsigned short)23029;
unsigned short var_13 = (unsigned short)23383;
unsigned short var_14 = (unsigned short)28170;
unsigned char var_15 = (unsigned char)35;
unsigned long long int var_16 = 227155921865436526ULL;
int var_17 = -624421568;
signed char var_18 = (signed char)107;
unsigned long long int var_19 = 3955441479351634374ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)14;
unsigned long long int var_21 = 7356835834642728855ULL;
long long int var_22 = 9147027204179311392LL;
unsigned long long int var_23 = 17875942343151553528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
