#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16032;
unsigned short var_9 = (unsigned short)23801;
long long int var_13 = -2614383871563100966LL;
int zero = 0;
long long int var_19 = 6174234696287087981LL;
unsigned long long int var_20 = 18068739926389927348ULL;
long long int var_21 = 289930034479188900LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
