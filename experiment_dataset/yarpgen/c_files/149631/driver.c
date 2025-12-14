#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43868;
_Bool var_7 = (_Bool)1;
long long int var_10 = -4651138739891248347LL;
int var_12 = 1170693244;
unsigned char var_14 = (unsigned char)121;
unsigned long long int var_15 = 9126072151501867455ULL;
int zero = 0;
signed char var_17 = (signed char)-20;
unsigned short var_18 = (unsigned short)1039;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)26224;
signed char var_21 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
