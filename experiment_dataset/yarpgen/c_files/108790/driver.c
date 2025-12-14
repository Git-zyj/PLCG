#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62221;
signed char var_3 = (signed char)-85;
long long int var_4 = 4999466724621205927LL;
long long int var_5 = -1106415248786417334LL;
unsigned short var_11 = (unsigned short)33178;
int zero = 0;
long long int var_12 = 9105749282787485302LL;
long long int var_13 = -3696317311422614309LL;
int var_14 = 413404995;
long long int var_15 = -433260567813504801LL;
signed char var_16 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
