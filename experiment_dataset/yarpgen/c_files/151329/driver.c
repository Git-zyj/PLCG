#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4875362093846092060LL;
unsigned long long int var_3 = 18240758638808396315ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 879602929U;
unsigned int var_7 = 2302805142U;
unsigned short var_8 = (unsigned short)4386;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 8449442710133791741ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2013967860108616185ULL;
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
