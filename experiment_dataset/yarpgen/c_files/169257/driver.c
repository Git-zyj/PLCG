#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3092790243U;
unsigned short var_4 = (unsigned short)52962;
long long int var_5 = 3539457820478914009LL;
unsigned short var_9 = (unsigned short)14648;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4170558258U;
unsigned char var_21 = (unsigned char)13;
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
