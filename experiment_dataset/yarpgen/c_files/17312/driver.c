#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6544;
unsigned short var_2 = (unsigned short)13766;
unsigned short var_3 = (unsigned short)2732;
int var_4 = -1096517866;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)17813;
unsigned short var_8 = (unsigned short)64984;
int zero = 0;
short var_10 = (short)15788;
short var_11 = (short)23917;
unsigned short var_12 = (unsigned short)47033;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
