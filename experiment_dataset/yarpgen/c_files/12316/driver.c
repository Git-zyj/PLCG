#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)161;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)77;
long long int var_8 = 4652562110765100876LL;
long long int var_10 = -4862539039242799734LL;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
signed char var_17 = (signed char)89;
signed char var_18 = (signed char)-115;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
