#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-38;
short var_8 = (short)-1533;
unsigned short var_12 = (unsigned short)18233;
short var_13 = (short)-28260;
int zero = 0;
long long int var_17 = -6391484689076414975LL;
unsigned short var_18 = (unsigned short)27458;
unsigned short var_19 = (unsigned short)20923;
long long int var_20 = -2892329443709977282LL;
signed char var_21 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
