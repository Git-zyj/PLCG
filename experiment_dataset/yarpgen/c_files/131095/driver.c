#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45704;
signed char var_13 = (signed char)120;
signed char var_14 = (signed char)-20;
long long int var_15 = -626407185521015400LL;
unsigned short var_16 = (unsigned short)16253;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -8802457815867919670LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
