#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4609890877265487518LL;
int var_2 = 398605563;
int var_4 = -1052213517;
int var_5 = 422657469;
int var_10 = 1309246289;
int zero = 0;
int var_12 = -702003364;
long long int var_13 = 1015984066113247308LL;
int var_14 = -1809972895;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
