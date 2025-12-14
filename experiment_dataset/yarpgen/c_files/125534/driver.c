#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26396;
unsigned short var_1 = (unsigned short)3025;
long long int var_3 = -6748196934915204274LL;
long long int var_4 = -237510825406578475LL;
unsigned short var_6 = (unsigned short)55815;
unsigned int var_8 = 2611980823U;
unsigned short var_10 = (unsigned short)20115;
signed char var_12 = (signed char)-57;
short var_16 = (short)-19932;
int zero = 0;
unsigned long long int var_17 = 16395927062949843240ULL;
unsigned short var_18 = (unsigned short)49064;
short var_19 = (short)19140;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
