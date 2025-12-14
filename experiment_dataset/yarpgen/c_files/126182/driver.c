#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12251635403252774156ULL;
int var_1 = -1688228817;
signed char var_2 = (signed char)97;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)26508;
unsigned int var_11 = 4102427917U;
int zero = 0;
short var_13 = (short)-4395;
long long int var_14 = 2119418470733461836LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
