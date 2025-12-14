#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5554758133796961294ULL;
short var_4 = (short)-29767;
unsigned int var_12 = 3363023161U;
signed char var_13 = (signed char)6;
int var_14 = 1556552134;
int zero = 0;
int var_16 = -1008282462;
int var_17 = -886739739;
unsigned short var_18 = (unsigned short)41944;
signed char var_19 = (signed char)97;
signed char var_20 = (signed char)-67;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)67;
signed char var_23 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
