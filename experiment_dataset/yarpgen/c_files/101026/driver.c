#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2902375632339156644ULL;
long long int var_1 = -770510872343628149LL;
unsigned char var_9 = (unsigned char)42;
unsigned int var_10 = 1981096024U;
unsigned short var_12 = (unsigned short)28673;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1464762240;
unsigned long long int var_17 = 1705593279148686120ULL;
signed char var_18 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
