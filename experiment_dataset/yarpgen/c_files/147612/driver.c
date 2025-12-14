#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3220537587U;
int var_4 = 780300266;
long long int var_6 = -8528385056670322194LL;
int var_8 = -1578017350;
signed char var_11 = (signed char)-17;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
unsigned long long int var_13 = 3573860102628285343ULL;
unsigned long long int var_14 = 4381296561399929700ULL;
int var_15 = 1781446958;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
