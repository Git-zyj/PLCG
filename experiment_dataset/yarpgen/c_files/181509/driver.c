#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5033469049749058665LL;
long long int var_7 = 5572253194510277140LL;
_Bool var_8 = (_Bool)1;
unsigned char var_15 = (unsigned char)127;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)100;
unsigned char var_20 = (unsigned char)251;
signed char var_21 = (signed char)89;
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
