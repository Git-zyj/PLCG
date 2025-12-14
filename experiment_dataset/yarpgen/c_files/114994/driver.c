#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12227085537827521009ULL;
short var_3 = (short)-16302;
unsigned long long int var_7 = 17893143219357101578ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_16 = 1440835642U;
long long int var_17 = -1045288076916042004LL;
int var_19 = 1913455543;
int zero = 0;
unsigned long long int var_20 = 7483464632058952112ULL;
long long int var_21 = -1555069749871500112LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
