#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9008598832614937935LL;
long long int var_4 = 2337518923307738850LL;
short var_9 = (short)-4665;
int zero = 0;
long long int var_15 = 4967777797068955229LL;
int var_16 = 1271743121;
unsigned long long int var_17 = 3384332991537048441ULL;
void init() {
}

void checksum() {
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
