#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20736;
unsigned int var_5 = 1839524870U;
unsigned long long int var_6 = 16068087637229620715ULL;
signed char var_8 = (signed char)92;
unsigned long long int var_9 = 15051089709369844631ULL;
unsigned short var_10 = (unsigned short)501;
signed char var_14 = (signed char)-28;
unsigned long long int var_17 = 5141684435837079091ULL;
int zero = 0;
signed char var_19 = (signed char)9;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)123;
int var_23 = -151839420;
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
