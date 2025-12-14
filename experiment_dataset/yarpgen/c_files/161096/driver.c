#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51647;
unsigned short var_5 = (unsigned short)13141;
unsigned int var_7 = 3601861504U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-50;
unsigned short var_17 = (unsigned short)50167;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 2647477511107186364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
