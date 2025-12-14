#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -240353989;
unsigned long long int var_5 = 259288141037993617ULL;
unsigned long long int var_6 = 10222999181270648763ULL;
unsigned short var_8 = (unsigned short)51591;
int var_9 = 876028824;
int zero = 0;
unsigned long long int var_11 = 6781311656809012461ULL;
int var_12 = -946697517;
unsigned long long int var_13 = 8657860146954178846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
