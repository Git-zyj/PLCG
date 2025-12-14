#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19088;
unsigned short var_2 = (unsigned short)34267;
unsigned long long int var_4 = 16057864660576420740ULL;
unsigned char var_6 = (unsigned char)176;
int var_7 = -1968075367;
unsigned long long int var_8 = 5309850352380259827ULL;
unsigned char var_9 = (unsigned char)117;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 694531812U;
short var_13 = (short)31136;
int zero = 0;
unsigned int var_14 = 2821606899U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)161;
int var_17 = -1084482190;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
