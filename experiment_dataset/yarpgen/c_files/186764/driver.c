#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1849431502;
unsigned char var_2 = (unsigned char)108;
int var_3 = -1794923195;
unsigned int var_5 = 355043071U;
unsigned short var_8 = (unsigned short)43686;
int var_10 = 596710342;
int zero = 0;
unsigned long long int var_11 = 14008135398719749565ULL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)222;
unsigned short var_14 = (unsigned short)53616;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
