#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31292;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-107;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)155;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-26304;
int var_22 = -355005975;
long long int var_23 = 6715414507463902966LL;
signed char var_24 = (signed char)-78;
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
