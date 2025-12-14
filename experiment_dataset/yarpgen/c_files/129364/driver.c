#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-47;
signed char var_6 = (signed char)38;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3343749342U;
unsigned short var_14 = (unsigned short)32549;
int zero = 0;
unsigned int var_19 = 2542331326U;
unsigned short var_20 = (unsigned short)34314;
long long int var_21 = -4248842165303190376LL;
short var_22 = (short)-7920;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
