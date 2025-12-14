#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25919;
unsigned int var_1 = 754297568U;
short var_2 = (short)14979;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3812375294U;
long long int var_6 = 5314892240679230817LL;
unsigned long long int var_7 = 8248948575864735393ULL;
int var_9 = 1892315264;
int var_10 = -804224693;
signed char var_12 = (signed char)-49;
int var_14 = -1749995895;
unsigned short var_18 = (unsigned short)9947;
int var_19 = 1571088305;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 680041785U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
