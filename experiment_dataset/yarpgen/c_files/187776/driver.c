#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)60;
unsigned long long int var_2 = 5223284764035584267ULL;
unsigned short var_3 = (unsigned short)57195;
unsigned long long int var_5 = 17569593956699904698ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 4040128013U;
int zero = 0;
unsigned short var_11 = (unsigned short)2707;
unsigned int var_12 = 2517702851U;
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
