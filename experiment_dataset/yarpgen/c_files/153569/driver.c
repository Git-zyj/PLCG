#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)56654;
signed char var_4 = (signed char)-121;
unsigned short var_5 = (unsigned short)48242;
signed char var_6 = (signed char)-14;
unsigned int var_8 = 350569793U;
long long int var_9 = 6237629549033812712LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
