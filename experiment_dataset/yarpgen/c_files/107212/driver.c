#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2398082164534360168LL;
signed char var_1 = (signed char)123;
short var_2 = (short)-13863;
signed char var_3 = (signed char)-77;
unsigned char var_4 = (unsigned char)244;
unsigned long long int var_6 = 3099788106736897509ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-88;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)208;
unsigned long long int var_12 = 12607105380295455319ULL;
unsigned long long int var_13 = 2153402953679005702ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
