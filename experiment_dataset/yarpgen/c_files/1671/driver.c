#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)14019;
_Bool var_6 = (_Bool)1;
int var_7 = 891998374;
short var_12 = (short)-20329;
int zero = 0;
long long int var_18 = -7478594439744690998LL;
unsigned long long int var_19 = 10489065563858466722ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
