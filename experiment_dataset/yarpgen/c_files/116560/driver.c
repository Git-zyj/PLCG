#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9196742116684876827ULL;
long long int var_1 = 6810941640038903261LL;
short var_2 = (short)14848;
signed char var_3 = (signed char)79;
short var_6 = (short)-6765;
signed char var_7 = (signed char)117;
unsigned short var_8 = (unsigned short)47712;
long long int var_9 = -8278876959693627494LL;
unsigned long long int var_11 = 1280682671957396514ULL;
long long int var_13 = -3781707479637533488LL;
int zero = 0;
unsigned long long int var_14 = 792299849365212651ULL;
short var_15 = (short)9325;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)58550;
int var_18 = -1176602829;
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
