#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7878;
unsigned int var_3 = 2370385286U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 13198594286773394478ULL;
signed char var_8 = (signed char)-115;
long long int var_9 = -2391707190864528704LL;
long long int var_11 = 4364893566887459988LL;
long long int var_13 = -7906059767334556868LL;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
signed char var_21 = (signed char)6;
void init() {
}

void checksum() {
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
