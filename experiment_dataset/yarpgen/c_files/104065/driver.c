#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29863;
long long int var_1 = -5631536362975465502LL;
short var_2 = (short)-2789;
short var_3 = (short)15100;
unsigned int var_6 = 1059443254U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16583;
unsigned long long int var_14 = 17459681080129983796ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 4607337139007844402ULL;
unsigned long long int var_18 = 7703939317000647678ULL;
short var_19 = (short)-28998;
int zero = 0;
unsigned char var_20 = (unsigned char)104;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1626749950766354226ULL;
signed char var_23 = (signed char)113;
unsigned long long int var_24 = 1587068195969900260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
