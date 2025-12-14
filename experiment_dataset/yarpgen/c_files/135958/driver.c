#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1691713223;
unsigned long long int var_6 = 13168132686109338525ULL;
unsigned short var_7 = (unsigned short)21524;
int var_8 = 578089343;
_Bool var_12 = (_Bool)1;
long long int var_14 = -5798145172622351890LL;
int zero = 0;
long long int var_15 = -2484794896577003774LL;
signed char var_16 = (signed char)8;
_Bool var_17 = (_Bool)1;
int var_18 = 710118450;
int var_19 = -1721494003;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
