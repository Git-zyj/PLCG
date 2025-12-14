#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1282082634322208472ULL;
unsigned int var_3 = 540035742U;
unsigned int var_7 = 354409725U;
short var_8 = (short)-16324;
long long int var_9 = 7156070187837694140LL;
long long int var_14 = 4127963877140188112LL;
int zero = 0;
short var_16 = (short)-4996;
unsigned long long int var_17 = 3137034212545793658ULL;
short var_18 = (short)-20496;
void init() {
}

void checksum() {
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
