#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-83;
unsigned short var_5 = (unsigned short)12372;
unsigned int var_6 = 104176024U;
unsigned int var_7 = 2394097895U;
unsigned long long int var_8 = 18107249582726963083ULL;
long long int var_10 = -2233083523292334285LL;
unsigned long long int var_14 = 6506460270854909841ULL;
unsigned short var_15 = (unsigned short)8087;
unsigned long long int var_17 = 3014229974864803484ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5350985044823593257LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
