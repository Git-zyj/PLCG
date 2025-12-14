#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_5 = (signed char)-104;
_Bool var_9 = (_Bool)0;
int var_13 = 623732585;
unsigned long long int var_14 = 7202151302919531507ULL;
unsigned long long int var_15 = 16407853936830886499ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)44;
unsigned short var_18 = (unsigned short)60195;
unsigned char var_19 = (unsigned char)14;
long long int var_20 = -8011273472757078016LL;
_Bool var_21 = (_Bool)0;
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
