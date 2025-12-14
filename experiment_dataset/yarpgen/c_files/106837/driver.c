#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
signed char var_1 = (signed char)-59;
unsigned short var_4 = (unsigned short)1361;
int var_5 = 2032772566;
unsigned char var_10 = (unsigned char)25;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)18;
int zero = 0;
unsigned long long int var_18 = 3514815122715977759ULL;
signed char var_19 = (signed char)40;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)65112;
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
