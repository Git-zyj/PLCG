#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned int var_1 = 2672863681U;
unsigned int var_5 = 1443913640U;
long long int var_8 = 5805678896959544569LL;
long long int var_9 = 576338313477036477LL;
int var_11 = 1712248974;
unsigned long long int var_12 = 10447166233740566801ULL;
unsigned char var_13 = (unsigned char)76;
unsigned int var_14 = 1999941073U;
unsigned int var_15 = 1689752279U;
unsigned int var_16 = 2844508217U;
signed char var_17 = (signed char)-60;
int zero = 0;
int var_18 = -1652496521;
unsigned long long int var_19 = 13376519453097145861ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
