#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 10650002188098722858ULL;
short var_4 = (short)-13702;
short var_7 = (short)2121;
int var_8 = -566561505;
signed char var_9 = (signed char)-39;
unsigned short var_10 = (unsigned short)55655;
unsigned long long int var_11 = 9156913672529624787ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)742;
long long int var_14 = 1899770515362892208LL;
short var_15 = (short)-28909;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5615048335023277146ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
