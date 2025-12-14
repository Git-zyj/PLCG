#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-69;
unsigned long long int var_6 = 9279935016426484422ULL;
unsigned long long int var_7 = 10709600536824302947ULL;
short var_10 = (short)1389;
short var_11 = (short)-5805;
unsigned char var_12 = (unsigned char)104;
unsigned short var_13 = (unsigned short)23591;
unsigned short var_15 = (unsigned short)24012;
unsigned short var_17 = (unsigned short)29890;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1812086148;
unsigned long long int var_20 = 8762308707798506366ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
