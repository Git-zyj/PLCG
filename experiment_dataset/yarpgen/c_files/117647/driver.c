#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)41116;
long long int var_3 = 1476291821529722795LL;
int var_4 = -243350352;
unsigned long long int var_5 = 5535801128234783800ULL;
unsigned long long int var_7 = 11526313705825845182ULL;
int var_10 = -1312250090;
int var_12 = 1984643958;
int zero = 0;
int var_13 = 1876714407;
long long int var_14 = -7261712564552190786LL;
short var_15 = (short)-26688;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
