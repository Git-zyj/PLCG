#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4451618465749941067LL;
unsigned int var_4 = 121645549U;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)59;
int zero = 0;
unsigned short var_10 = (unsigned short)23860;
unsigned short var_11 = (unsigned short)12580;
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
