#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
long long int var_6 = -2126156160302623843LL;
int var_7 = -801796145;
unsigned long long int var_9 = 10892141943454141634ULL;
long long int var_10 = -6125939796234852712LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)59591;
int var_13 = -305221690;
unsigned long long int var_14 = 7516525741545555811ULL;
unsigned short var_15 = (unsigned short)32063;
int var_16 = -2000773498;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
