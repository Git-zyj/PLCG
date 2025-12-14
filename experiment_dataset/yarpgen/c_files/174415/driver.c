#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3089826250U;
signed char var_1 = (signed char)-4;
int var_3 = -1889793610;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 172167999593557068ULL;
unsigned short var_8 = (unsigned short)38415;
_Bool var_9 = (_Bool)1;
int var_14 = -1539480372;
int var_16 = -1256771063;
long long int var_17 = -1213657912257169800LL;
int var_18 = 1305393318;
long long int var_19 = -6587156790885992896LL;
int zero = 0;
signed char var_20 = (signed char)-8;
int var_21 = -2052979009;
unsigned long long int var_22 = 7461943356921312291ULL;
unsigned long long int var_23 = 13152556391547448284ULL;
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
