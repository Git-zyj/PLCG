#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2173967473514938967LL;
unsigned short var_7 = (unsigned short)17793;
long long int var_8 = -2295679091662454897LL;
long long int var_9 = 9148605145178555140LL;
int zero = 0;
unsigned long long int var_15 = 10137363291336643807ULL;
unsigned int var_16 = 391402676U;
short var_17 = (short)-26044;
long long int var_18 = 1886102693166111980LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
