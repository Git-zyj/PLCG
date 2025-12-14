#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4475;
unsigned int var_1 = 3649418841U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1065000688U;
short var_4 = (short)-30306;
unsigned int var_5 = 2902466634U;
unsigned int var_6 = 150469310U;
unsigned char var_7 = (unsigned char)77;
unsigned short var_8 = (unsigned short)44230;
int var_9 = -1956788458;
unsigned int var_10 = 3040831140U;
_Bool var_14 = (_Bool)0;
int var_16 = 1297734931;
int var_19 = 334960338;
int zero = 0;
unsigned int var_20 = 1672582607U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 13843189470545666118ULL;
unsigned long long int var_24 = 13020473688087033192ULL;
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
