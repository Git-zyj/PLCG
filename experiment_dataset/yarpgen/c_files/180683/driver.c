#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3094656631034426203LL;
short var_1 = (short)-5887;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)29;
short var_11 = (short)-9835;
int var_14 = -1277157587;
int zero = 0;
signed char var_16 = (signed char)34;
unsigned long long int var_17 = 838514895173526608ULL;
long long int var_18 = 6649804273598906215LL;
long long int var_19 = -32626998130401324LL;
unsigned int var_20 = 3603455689U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
