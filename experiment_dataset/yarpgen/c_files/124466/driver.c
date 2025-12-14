#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 8909870255309906698LL;
unsigned long long int var_2 = 11061841698442544010ULL;
unsigned short var_3 = (unsigned short)1791;
signed char var_5 = (signed char)-31;
int var_6 = -1562699508;
unsigned short var_7 = (unsigned short)59295;
long long int var_9 = -2473829107779394919LL;
signed char var_12 = (signed char)113;
int zero = 0;
unsigned long long int var_20 = 7641337370861142949ULL;
unsigned long long int var_21 = 11315906450413491170ULL;
long long int var_22 = -8674171685125522537LL;
int var_23 = 567843002;
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
