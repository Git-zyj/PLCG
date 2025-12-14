#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1567109477U;
int var_1 = -1510121703;
long long int var_4 = 5225224733575438518LL;
unsigned int var_5 = 3911689270U;
int var_6 = 500090705;
int var_10 = -323761229;
long long int var_11 = 4454062894778026836LL;
short var_12 = (short)20881;
unsigned int var_13 = 2535597525U;
int zero = 0;
unsigned int var_14 = 3837964636U;
unsigned int var_15 = 290884331U;
void init() {
}

void checksum() {
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
