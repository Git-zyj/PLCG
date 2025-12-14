#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2067019327111994749LL;
_Bool var_2 = (_Bool)0;
int var_4 = -1344524971;
unsigned long long int var_6 = 9634604266347684928ULL;
short var_7 = (short)14181;
int var_9 = -1998030677;
int var_14 = 1444897139;
unsigned char var_15 = (unsigned char)180;
int var_16 = 370334641;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1061514140;
int var_20 = 2012515339;
long long int var_21 = 2250115410001971663LL;
void init() {
}

void checksum() {
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
