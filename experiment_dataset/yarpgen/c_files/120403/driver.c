#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11381;
unsigned long long int var_4 = 404441052104890529ULL;
_Bool var_8 = (_Bool)0;
long long int var_12 = 5289713870526235375LL;
unsigned long long int var_17 = 8033610364229729629ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-50;
long long int var_22 = -1228091937246155700LL;
unsigned short var_23 = (unsigned short)13148;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
