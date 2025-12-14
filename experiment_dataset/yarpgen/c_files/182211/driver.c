#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3883246503706534072LL;
short var_5 = (short)-5290;
unsigned short var_6 = (unsigned short)26102;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2613172628U;
long long int var_11 = 622282843465095122LL;
unsigned int var_13 = 2998967265U;
int zero = 0;
signed char var_14 = (signed char)-108;
long long int var_15 = -405156042257628935LL;
long long int var_16 = -8642947140520683359LL;
long long int var_17 = 5493282480692721021LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
