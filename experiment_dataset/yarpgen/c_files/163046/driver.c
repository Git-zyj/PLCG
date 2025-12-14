#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)204;
unsigned long long int var_1 = 17989517892702576557ULL;
unsigned short var_2 = (unsigned short)10898;
unsigned short var_3 = (unsigned short)65229;
signed char var_4 = (signed char)-113;
signed char var_5 = (signed char)-89;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 17072458163481257872ULL;
unsigned short var_8 = (unsigned short)20152;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-6419;
int zero = 0;
signed char var_11 = (signed char)68;
int var_12 = -730672282;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)67;
signed char var_15 = (signed char)46;
short var_16 = (short)32339;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)18083;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
