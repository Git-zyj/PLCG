#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22544;
unsigned long long int var_2 = 15075074216327380699ULL;
long long int var_4 = -6739550440789629450LL;
unsigned int var_5 = 3455395661U;
short var_6 = (short)27823;
unsigned int var_8 = 2251744802U;
long long int var_10 = -7641081479149286742LL;
unsigned short var_11 = (unsigned short)63950;
int zero = 0;
unsigned long long int var_12 = 6415326445122426915ULL;
unsigned int var_13 = 3913339626U;
void init() {
}

void checksum() {
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
