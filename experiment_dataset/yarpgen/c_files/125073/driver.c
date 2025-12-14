#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7367585197828235937ULL;
unsigned short var_4 = (unsigned short)58610;
unsigned long long int var_5 = 7852675494710924836ULL;
long long int var_12 = -8194423719851727537LL;
unsigned long long int var_15 = 8444371026112291030ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
long long int var_20 = -6263647117954146575LL;
int var_21 = 1486265983;
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
