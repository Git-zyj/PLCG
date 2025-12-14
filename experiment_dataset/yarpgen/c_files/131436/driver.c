#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1894056035;
unsigned long long int var_1 = 14845119346738369839ULL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)41237;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 11550072679681345631ULL;
unsigned long long int var_20 = 10459867545960260851ULL;
unsigned short var_21 = (unsigned short)36817;
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
