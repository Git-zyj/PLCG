#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6957681270309736190LL;
long long int var_5 = 605935913004183217LL;
unsigned char var_6 = (unsigned char)66;
unsigned long long int var_10 = 7528294262064818507ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 520241415U;
int zero = 0;
int var_18 = 517020791;
long long int var_19 = -7056254350138774361LL;
int var_20 = -802528495;
void init() {
}

void checksum() {
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
