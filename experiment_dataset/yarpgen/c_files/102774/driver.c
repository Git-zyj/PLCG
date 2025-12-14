#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-125;
unsigned int var_2 = 4255986821U;
signed char var_5 = (signed char)49;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 4672901U;
signed char var_14 = (signed char)76;
signed char var_15 = (signed char)16;
unsigned char var_17 = (unsigned char)177;
int zero = 0;
signed char var_18 = (signed char)89;
long long int var_19 = -942326327139517901LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
int var_22 = 666368206;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
