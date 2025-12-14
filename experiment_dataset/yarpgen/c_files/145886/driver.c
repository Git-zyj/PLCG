#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
signed char var_1 = (signed char)59;
signed char var_2 = (signed char)-126;
signed char var_3 = (signed char)-90;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)4;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-41;
signed char var_9 = (signed char)14;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)35342;
signed char var_12 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
