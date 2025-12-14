#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)66;
unsigned long long int var_4 = 8190166481867904583ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 8657576660861287955ULL;
long long int var_12 = 4830012223854087181LL;
int zero = 0;
signed char var_13 = (signed char)-102;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)2760;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
