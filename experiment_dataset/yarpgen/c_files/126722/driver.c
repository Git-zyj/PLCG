#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1039469659;
short var_2 = (short)-11071;
unsigned short var_3 = (unsigned short)19302;
short var_4 = (short)-10761;
unsigned int var_7 = 2321870392U;
unsigned char var_8 = (unsigned char)245;
long long int var_9 = -7401738154705153730LL;
signed char var_10 = (signed char)-45;
unsigned long long int var_12 = 16790385434689964244ULL;
signed char var_13 = (signed char)-92;
unsigned short var_14 = (unsigned short)43314;
int zero = 0;
long long int var_15 = -569358972261554072LL;
short var_16 = (short)-10575;
signed char var_17 = (signed char)-49;
unsigned int var_18 = 98681346U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
