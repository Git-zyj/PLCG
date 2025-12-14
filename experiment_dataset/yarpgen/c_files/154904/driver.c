#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26226;
unsigned char var_2 = (unsigned char)62;
unsigned int var_4 = 798955790U;
unsigned char var_5 = (unsigned char)219;
int var_6 = -929278606;
unsigned int var_9 = 3642648158U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 7389466532884110497ULL;
short var_14 = (short)7302;
unsigned int var_15 = 376720001U;
unsigned short var_18 = (unsigned short)53770;
int zero = 0;
unsigned long long int var_20 = 14173609801977798776ULL;
int var_21 = 2024092868;
int var_22 = -1399700412;
unsigned char var_23 = (unsigned char)114;
short var_24 = (short)14887;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
