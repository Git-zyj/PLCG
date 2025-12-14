#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)32836;
unsigned short var_13 = (unsigned short)53178;
unsigned long long int var_16 = 5324132000545791ULL;
unsigned int var_17 = 273837355U;
int zero = 0;
long long int var_18 = -5825665986268082113LL;
unsigned char var_19 = (unsigned char)71;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4598254252478964509LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
