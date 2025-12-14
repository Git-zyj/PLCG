#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -7480553700443544095LL;
unsigned char var_15 = (unsigned char)77;
int zero = 0;
long long int var_18 = -8029997867550989915LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
