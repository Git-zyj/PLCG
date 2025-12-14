#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14145859523746449478ULL;
unsigned long long int var_1 = 9695795082174323734ULL;
unsigned long long int var_9 = 10211163533073104583ULL;
signed char var_10 = (signed char)-84;
unsigned int var_14 = 3926826080U;
int var_18 = -1872969411;
int zero = 0;
short var_19 = (short)24667;
unsigned short var_20 = (unsigned short)42970;
_Bool var_21 = (_Bool)1;
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
