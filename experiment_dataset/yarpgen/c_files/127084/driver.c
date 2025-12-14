#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
signed char var_2 = (signed char)94;
signed char var_3 = (signed char)-126;
unsigned long long int var_8 = 2414433713542044374ULL;
unsigned long long int var_10 = 2236542355278513055ULL;
signed char var_14 = (signed char)108;
signed char var_15 = (signed char)115;
int zero = 0;
signed char var_17 = (signed char)-51;
unsigned char var_18 = (unsigned char)210;
signed char var_19 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
