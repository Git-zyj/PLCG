#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49707;
unsigned int var_6 = 3576756555U;
unsigned char var_10 = (unsigned char)4;
unsigned int var_13 = 2830863841U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3062830600U;
unsigned long long int var_20 = 3466267257652578519ULL;
unsigned long long int var_21 = 8323180792649276108ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
