#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -405251104;
unsigned int var_3 = 383491913U;
int var_4 = -1980007579;
unsigned long long int var_5 = 1026967843184394089ULL;
int var_7 = 752306950;
short var_8 = (short)22483;
signed char var_9 = (signed char)0;
long long int var_10 = -2005876888685640614LL;
unsigned char var_11 = (unsigned char)247;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-2885;
int zero = 0;
unsigned long long int var_15 = 3798899064625173601ULL;
int var_16 = 1989384671;
int var_17 = -1588214136;
int var_18 = -339305985;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
