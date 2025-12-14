#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
_Bool var_2 = (_Bool)0;
int var_4 = -742303201;
unsigned char var_5 = (unsigned char)32;
unsigned char var_10 = (unsigned char)226;
unsigned char var_14 = (unsigned char)176;
int zero = 0;
unsigned int var_17 = 2317773805U;
int var_18 = -161931010;
unsigned long long int var_19 = 8423409350056520389ULL;
int var_20 = -602219217;
void init() {
}

void checksum() {
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
