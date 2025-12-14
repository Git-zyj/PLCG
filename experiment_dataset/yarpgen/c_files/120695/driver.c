#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11106067371206997096ULL;
unsigned long long int var_1 = 17427987349895031705ULL;
unsigned short var_2 = (unsigned short)55333;
long long int var_3 = 6394788007401149342LL;
unsigned short var_5 = (unsigned short)1502;
short var_6 = (short)-29607;
long long int var_8 = -148323960991461111LL;
unsigned long long int var_9 = 16684023807794038289ULL;
long long int var_13 = -688467179048411782LL;
unsigned short var_14 = (unsigned short)37239;
long long int var_17 = 4101782975601408545LL;
long long int var_18 = 1870997252413215288LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 370161418U;
unsigned char var_21 = (unsigned char)204;
_Bool var_22 = (_Bool)1;
int var_23 = 2130773234;
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
