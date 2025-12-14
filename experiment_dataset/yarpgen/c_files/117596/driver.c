#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2232042519U;
unsigned int var_8 = 922541664U;
short var_9 = (short)-2616;
unsigned int var_16 = 2025883250U;
int zero = 0;
unsigned long long int var_18 = 7426385424890960613ULL;
unsigned int var_19 = 3862322749U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
