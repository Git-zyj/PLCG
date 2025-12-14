#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
signed char var_2 = (signed char)74;
unsigned int var_3 = 3950273372U;
unsigned long long int var_4 = 9750658757443048756ULL;
unsigned long long int var_5 = 9881175409298187535ULL;
unsigned int var_7 = 2188474581U;
unsigned int var_8 = 971913406U;
signed char var_9 = (signed char)-3;
signed char var_10 = (signed char)-95;
signed char var_11 = (signed char)-117;
signed char var_12 = (signed char)26;
int zero = 0;
unsigned int var_13 = 3308702822U;
unsigned long long int var_14 = 3341452191489947513ULL;
unsigned int var_15 = 2490492012U;
unsigned int var_16 = 2286253879U;
unsigned int var_17 = 222455482U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
