#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)63;
signed char var_2 = (signed char)102;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)108;
_Bool var_6 = (_Bool)0;
long long int var_12 = 3344638180436595873LL;
int zero = 0;
long long int var_13 = -239457793056335827LL;
long long int var_14 = -4082256678196925109LL;
unsigned char var_15 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
