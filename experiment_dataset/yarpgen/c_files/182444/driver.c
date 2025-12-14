#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -957534816850459232LL;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-12461;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1503836073U;
unsigned short var_7 = (unsigned short)48550;
long long int var_8 = -5671342302000383778LL;
long long int var_9 = 4672106777787755522LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2737755658U;
unsigned int var_12 = 316971091U;
long long int var_13 = -4898383491582603494LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
