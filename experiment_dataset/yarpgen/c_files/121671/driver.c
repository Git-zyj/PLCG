#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1584776423U;
unsigned int var_3 = 180726911U;
int var_4 = -817468104;
unsigned int var_6 = 3230686880U;
unsigned int var_7 = 1237383724U;
unsigned char var_10 = (unsigned char)31;
int var_13 = -1503171774;
unsigned long long int var_16 = 3052609551538807926ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)21781;
int zero = 0;
unsigned int var_20 = 2667386229U;
unsigned char var_21 = (unsigned char)35;
unsigned char var_22 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
