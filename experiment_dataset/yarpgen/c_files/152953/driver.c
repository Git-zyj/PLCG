#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9161058182751818637ULL;
short var_2 = (short)-24428;
int var_4 = -1681054852;
signed char var_6 = (signed char)93;
int var_9 = -83574117;
long long int var_11 = 5357555088272545028LL;
unsigned int var_12 = 2123081770U;
unsigned long long int var_13 = 11320231160260676392ULL;
unsigned int var_14 = 4181558238U;
unsigned char var_16 = (unsigned char)4;
unsigned char var_17 = (unsigned char)3;
int zero = 0;
unsigned long long int var_18 = 7513958346925355725ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12321599554303703664ULL;
_Bool var_21 = (_Bool)1;
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
