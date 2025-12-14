#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1025670805;
unsigned short var_1 = (unsigned short)52954;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-9;
long long int var_8 = 4399626421350517040LL;
signed char var_10 = (signed char)48;
unsigned short var_13 = (unsigned short)45361;
_Bool var_14 = (_Bool)0;
short var_15 = (short)31843;
int zero = 0;
unsigned short var_17 = (unsigned short)42484;
unsigned short var_18 = (unsigned short)3695;
long long int var_19 = 751689568723331100LL;
void init() {
}

void checksum() {
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
