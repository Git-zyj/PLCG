#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1102539368807172065ULL;
short var_3 = (short)31326;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -1401964434900556524LL;
int var_10 = 670433170;
int var_12 = 311442311;
short var_13 = (short)1274;
unsigned short var_14 = (unsigned short)6554;
int zero = 0;
signed char var_16 = (signed char)99;
int var_17 = -2143699060;
unsigned short var_18 = (unsigned short)54439;
long long int var_19 = 8136831230959623805LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
