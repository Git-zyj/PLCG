#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
int var_2 = 1529207157;
long long int var_4 = 7002430926801551574LL;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)17;
int zero = 0;
unsigned char var_12 = (unsigned char)89;
unsigned char var_13 = (unsigned char)215;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
