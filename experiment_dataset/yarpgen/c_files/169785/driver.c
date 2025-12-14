#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -908188233;
int var_6 = -1537013557;
int var_9 = 791945044;
long long int var_14 = 3092291027603481135LL;
int var_19 = -1495376952;
int zero = 0;
int var_20 = -1114280327;
int var_21 = -967022446;
long long int var_22 = 1192946213172044689LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
