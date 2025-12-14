#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-49;
long long int var_7 = 8765627719350533957LL;
long long int var_10 = -8483849795381371531LL;
unsigned short var_13 = (unsigned short)62713;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)116;
int zero = 0;
long long int var_20 = 1298004648096928578LL;
unsigned long long int var_21 = 450285300951792685ULL;
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
