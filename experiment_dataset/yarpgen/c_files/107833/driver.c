#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4019374480729982849LL;
unsigned char var_2 = (unsigned char)67;
signed char var_5 = (signed char)-85;
unsigned char var_6 = (unsigned char)173;
short var_7 = (short)25815;
short var_8 = (short)-23641;
long long int var_9 = 7030430748463171037LL;
signed char var_10 = (signed char)101;
short var_13 = (short)-12873;
int zero = 0;
int var_14 = -724417881;
_Bool var_15 = (_Bool)0;
int var_16 = -1475942064;
unsigned long long int var_17 = 16760782603291968001ULL;
long long int var_18 = 695324962642620617LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
