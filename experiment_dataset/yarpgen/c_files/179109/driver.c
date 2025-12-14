#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1329616131530741467LL;
unsigned int var_2 = 1518565513U;
unsigned char var_3 = (unsigned char)251;
unsigned char var_5 = (unsigned char)15;
long long int var_6 = 7812605249219553173LL;
unsigned int var_7 = 687772041U;
unsigned int var_9 = 1650750120U;
unsigned int var_10 = 56395655U;
unsigned int var_11 = 4132269701U;
unsigned long long int var_16 = 6432307982693654105ULL;
int zero = 0;
unsigned long long int var_19 = 6860264746204200237ULL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8884296207998533833LL;
unsigned long long int var_22 = 5808668143957876967ULL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
