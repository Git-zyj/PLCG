#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1965735975;
unsigned long long int var_3 = 8828353524314542010ULL;
unsigned int var_5 = 811695538U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 1909561283556552925ULL;
int var_12 = 2147162477;
int var_15 = 690117655;
int zero = 0;
short var_19 = (short)-12073;
long long int var_20 = -4767406371895817208LL;
void init() {
}

void checksum() {
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
