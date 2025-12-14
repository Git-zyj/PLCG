#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6526902900585766105LL;
unsigned char var_3 = (unsigned char)230;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)36;
long long int var_11 = 5262070211630225843LL;
short var_13 = (short)21128;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)136;
short var_16 = (short)25482;
void init() {
}

void checksum() {
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
