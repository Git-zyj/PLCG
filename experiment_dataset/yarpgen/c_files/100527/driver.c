#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 907531647;
_Bool var_5 = (_Bool)0;
long long int var_14 = -1974863760688645874LL;
unsigned short var_15 = (unsigned short)54866;
long long int var_17 = 3867282510768063653LL;
long long int var_18 = -4020030883907575758LL;
unsigned short var_19 = (unsigned short)50863;
int zero = 0;
unsigned char var_20 = (unsigned char)236;
int var_21 = -1444420756;
unsigned short var_22 = (unsigned short)30931;
long long int var_23 = 6755917142695610366LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
