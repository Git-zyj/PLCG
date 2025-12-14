#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28090;
signed char var_2 = (signed char)16;
unsigned int var_6 = 3322421285U;
long long int var_11 = -428324772626317788LL;
long long int var_15 = 5763297082992486507LL;
unsigned long long int var_16 = 9432233675528947664ULL;
unsigned long long int var_17 = 1927259829918488686ULL;
unsigned int var_18 = 3894191882U;
int zero = 0;
long long int var_20 = -2530662206950922674LL;
unsigned long long int var_21 = 14226366094487669807ULL;
long long int var_22 = 4557504775776215228LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
