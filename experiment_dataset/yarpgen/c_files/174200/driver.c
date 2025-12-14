#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -3591932349349319518LL;
unsigned long long int var_4 = 15126965949431747222ULL;
unsigned char var_5 = (unsigned char)194;
long long int var_7 = -6790468580185362637LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -5892710404884297833LL;
unsigned char var_10 = (unsigned char)0;
unsigned long long int var_13 = 1805048238047126923ULL;
signed char var_14 = (signed char)108;
unsigned char var_15 = (unsigned char)47;
int zero = 0;
long long int var_17 = -7934780180537440715LL;
unsigned char var_18 = (unsigned char)137;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 503325743U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
