#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1272185055535116196ULL;
unsigned char var_8 = (unsigned char)40;
short var_10 = (short)-3870;
int zero = 0;
long long int var_14 = 6190966325268597006LL;
unsigned short var_15 = (unsigned short)5803;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-26947;
unsigned long long int var_18 = 5910967785878698876ULL;
int var_19 = 1399184925;
long long int var_20 = -7668694791433828974LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
