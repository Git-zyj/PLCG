#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7720291151615774209LL;
long long int var_3 = -6162601474158378LL;
long long int var_5 = -9118613213341078865LL;
long long int var_6 = 7734761735038937981LL;
long long int var_8 = -8645812291665549196LL;
long long int var_9 = 2889415952389674033LL;
long long int var_12 = -401372787722971542LL;
long long int var_13 = -3400841828714748742LL;
int zero = 0;
long long int var_14 = 7915547361251248226LL;
long long int var_15 = 7705785317841608537LL;
long long int var_16 = 7113291729743428451LL;
long long int var_17 = 7475417055944067042LL;
void init() {
}

void checksum() {
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
