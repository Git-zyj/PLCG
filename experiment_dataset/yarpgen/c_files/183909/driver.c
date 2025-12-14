#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15271;
long long int var_2 = 8680796777461818886LL;
long long int var_4 = -874648281086670511LL;
signed char var_17 = (signed char)-107;
signed char var_18 = (signed char)85;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)1470;
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
