#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -5868089;
int var_3 = -667625352;
int var_4 = -134051526;
int var_8 = -959840568;
unsigned int var_9 = 2587066282U;
unsigned int var_10 = 3168343062U;
unsigned int var_12 = 2694210480U;
unsigned long long int var_14 = 13573100622880923611ULL;
unsigned long long int var_16 = 13927499831010194427ULL;
int var_17 = 2094084846;
int zero = 0;
unsigned int var_20 = 417099132U;
int var_21 = 828327224;
int var_22 = -2033913746;
short var_23 = (short)-13507;
unsigned long long int var_24 = 8433610802754175302ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
