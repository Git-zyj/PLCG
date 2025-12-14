#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned int var_1 = 2659771934U;
unsigned short var_2 = (unsigned short)54395;
long long int var_3 = -368261631177341654LL;
long long int var_4 = 8959563914353213333LL;
unsigned short var_5 = (unsigned short)8495;
_Bool var_6 = (_Bool)1;
long long int var_7 = 7714966224244426519LL;
unsigned long long int var_8 = 13005632284894295465ULL;
unsigned long long int var_9 = 12291269101170604259ULL;
long long int var_10 = -7495919608244289850LL;
unsigned long long int var_11 = 8563973318779969858ULL;
int zero = 0;
long long int var_12 = -5103955837230634913LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2695039919273943449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
