#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
unsigned char var_2 = (unsigned char)222;
long long int var_4 = -3142751317610578129LL;
short var_5 = (short)32539;
long long int var_6 = 458484675735090887LL;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)99;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)115;
int zero = 0;
unsigned short var_14 = (unsigned short)55454;
long long int var_15 = 9160056431881137995LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
