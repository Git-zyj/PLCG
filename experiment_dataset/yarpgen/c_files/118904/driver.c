#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 271556275;
long long int var_3 = 5957172560669769551LL;
unsigned int var_4 = 2690891253U;
long long int var_6 = -5092700588456759269LL;
unsigned short var_8 = (unsigned short)21202;
long long int var_9 = -4822925929630106119LL;
int zero = 0;
long long int var_10 = 5395915278395699797LL;
long long int var_11 = -4143396889594488674LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
