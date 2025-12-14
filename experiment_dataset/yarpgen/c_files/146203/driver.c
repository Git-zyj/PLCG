#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 195931880;
int var_2 = -1629419843;
unsigned long long int var_3 = 13261685842856002521ULL;
short var_4 = (short)670;
short var_5 = (short)7913;
int var_6 = 1817674492;
int var_7 = 1180140095;
unsigned short var_8 = (unsigned short)26610;
unsigned long long int var_9 = 2623987411820755087ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = -1542516183;
unsigned short var_12 = (unsigned short)4486;
int var_13 = 1660539751;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)171;
unsigned short var_16 = (unsigned short)38535;
unsigned long long int var_17 = 17677292906550623788ULL;
unsigned short var_18 = (unsigned short)41429;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
