#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38814;
short var_2 = (short)-1629;
unsigned short var_5 = (unsigned short)13258;
unsigned short var_7 = (unsigned short)13211;
short var_11 = (short)-8238;
long long int var_12 = -5529172223572259376LL;
short var_14 = (short)-27960;
unsigned short var_17 = (unsigned short)30928;
short var_18 = (short)-28728;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)60761;
short var_22 = (short)12104;
signed char var_23 = (signed char)82;
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
