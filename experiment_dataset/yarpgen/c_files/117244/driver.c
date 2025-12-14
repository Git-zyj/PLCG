#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -37780374;
unsigned int var_1 = 1024794010U;
unsigned long long int var_4 = 18156739329615854886ULL;
unsigned short var_5 = (unsigned short)37055;
unsigned long long int var_6 = 8025151346436014063ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 13346542702345446134ULL;
int zero = 0;
unsigned long long int var_12 = 9194762143378226352ULL;
unsigned short var_13 = (unsigned short)693;
unsigned short var_14 = (unsigned short)25301;
unsigned char var_15 = (unsigned char)214;
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
