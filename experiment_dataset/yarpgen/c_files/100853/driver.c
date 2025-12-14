#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
signed char var_2 = (signed char)-68;
signed char var_3 = (signed char)-79;
_Bool var_4 = (_Bool)1;
short var_6 = (short)10381;
unsigned short var_7 = (unsigned short)56040;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1452067056377848407LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)94;
unsigned short var_14 = (unsigned short)32341;
void init() {
}

void checksum() {
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
