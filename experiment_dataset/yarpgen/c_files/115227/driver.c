#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 337137358U;
short var_10 = (short)14726;
signed char var_11 = (signed char)-16;
unsigned long long int var_14 = 12979973126348500798ULL;
unsigned int var_18 = 4255263116U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 15200353637129609284ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)66;
void init() {
}

void checksum() {
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
