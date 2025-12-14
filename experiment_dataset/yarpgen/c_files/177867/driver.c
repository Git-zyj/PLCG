#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned short var_1 = (unsigned short)50171;
unsigned short var_2 = (unsigned short)57325;
short var_3 = (short)-17939;
unsigned short var_4 = (unsigned short)57677;
int var_5 = 1349987810;
int var_6 = -2061656019;
_Bool var_7 = (_Bool)0;
short var_8 = (short)8108;
unsigned long long int var_9 = 7642970381637301020ULL;
unsigned long long int var_11 = 4692508148707334ULL;
int zero = 0;
long long int var_12 = 1181824517767529113LL;
unsigned short var_13 = (unsigned short)4145;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
