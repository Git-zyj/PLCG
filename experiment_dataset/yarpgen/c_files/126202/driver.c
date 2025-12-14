#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1826296996U;
signed char var_3 = (signed char)-63;
int var_5 = 946268698;
unsigned long long int var_6 = 4295907557075905856ULL;
signed char var_7 = (signed char)16;
long long int var_8 = -6987992570481180895LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1587638481U;
long long int var_11 = 5643270044942263383LL;
int zero = 0;
long long int var_13 = -8995686532812443096LL;
unsigned int var_14 = 3321512835U;
unsigned short var_15 = (unsigned short)42834;
unsigned int var_16 = 444599716U;
void init() {
}

void checksum() {
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
