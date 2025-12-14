#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3955;
_Bool var_2 = (_Bool)1;
short var_5 = (short)31319;
short var_6 = (short)4354;
unsigned int var_10 = 919863280U;
unsigned long long int var_13 = 8846312633961460290ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)110;
unsigned long long int var_15 = 12755085340514111348ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
