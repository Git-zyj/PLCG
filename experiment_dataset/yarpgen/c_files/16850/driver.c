#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1466023003751402814ULL;
unsigned char var_3 = (unsigned char)55;
signed char var_6 = (signed char)79;
signed char var_8 = (signed char)34;
unsigned char var_10 = (unsigned char)28;
short var_13 = (short)10441;
unsigned char var_14 = (unsigned char)251;
long long int var_15 = -5246387751232599843LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)82;
unsigned short var_20 = (unsigned short)39905;
unsigned short var_21 = (unsigned short)11228;
unsigned long long int var_22 = 14570503078330233347ULL;
short var_23 = (short)-3160;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
