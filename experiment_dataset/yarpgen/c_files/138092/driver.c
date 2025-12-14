#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -839358162;
long long int var_1 = 3011331816462435122LL;
unsigned short var_3 = (unsigned short)20111;
_Bool var_4 = (_Bool)0;
int var_5 = 853916182;
long long int var_6 = 7620821460063720237LL;
_Bool var_9 = (_Bool)1;
int var_12 = -2062388391;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-61;
long long int var_18 = -4364993855500575528LL;
unsigned char var_19 = (unsigned char)32;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
