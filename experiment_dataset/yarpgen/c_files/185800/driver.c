#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31696;
unsigned short var_2 = (unsigned short)36970;
long long int var_4 = -2331978758278194189LL;
long long int var_10 = -9013524607272632953LL;
int zero = 0;
unsigned short var_11 = (unsigned short)61468;
long long int var_12 = -4525937081767025356LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
