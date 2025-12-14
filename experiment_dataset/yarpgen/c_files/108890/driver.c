#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4135;
unsigned long long int var_2 = 7838381742871286491ULL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
int var_7 = -666126122;
int zero = 0;
unsigned long long int var_13 = 15310811120232359220ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 16175626133243419626ULL;
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
