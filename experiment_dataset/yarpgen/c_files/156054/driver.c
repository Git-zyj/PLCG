#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10407;
unsigned long long int var_1 = 12969961494587200188ULL;
long long int var_2 = -4516291721116403253LL;
unsigned long long int var_3 = 7137904871055456506ULL;
short var_4 = (short)21649;
short var_5 = (short)741;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)46434;
short var_8 = (short)-27198;
signed char var_10 = (signed char)-32;
unsigned long long int var_11 = 6270653061230634331ULL;
unsigned char var_12 = (unsigned char)180;
short var_13 = (short)21690;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -6073090055992856153LL;
unsigned long long int var_16 = 3282924024993643118ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
