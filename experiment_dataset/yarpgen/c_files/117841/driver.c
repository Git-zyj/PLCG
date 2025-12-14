#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4231177727U;
_Bool var_1 = (_Bool)1;
unsigned int var_9 = 2309624623U;
short var_11 = (short)-5203;
short var_14 = (short)22744;
unsigned char var_15 = (unsigned char)208;
int zero = 0;
short var_19 = (short)-13711;
short var_20 = (short)23071;
unsigned long long int var_21 = 14038607796638844779ULL;
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
