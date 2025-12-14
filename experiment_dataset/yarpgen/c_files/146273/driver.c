#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5019366442427347817ULL;
unsigned char var_7 = (unsigned char)138;
_Bool var_10 = (_Bool)0;
long long int var_11 = -1624865611800200464LL;
long long int var_15 = -5078631598318359376LL;
unsigned long long int var_16 = 5463661761178760337ULL;
int zero = 0;
unsigned long long int var_17 = 360535936207555993ULL;
unsigned char var_18 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
