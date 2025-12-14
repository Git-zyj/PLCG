#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -869976801148297467LL;
unsigned long long int var_4 = 9710573426802906124ULL;
unsigned int var_10 = 146249283U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 682870411;
signed char var_21 = (signed char)-97;
void init() {
}

void checksum() {
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
