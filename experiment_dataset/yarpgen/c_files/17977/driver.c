#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5937012898349083454ULL;
unsigned int var_7 = 2800222805U;
unsigned long long int var_13 = 4774548650975725554ULL;
unsigned short var_15 = (unsigned short)26757;
int zero = 0;
unsigned int var_16 = 43312550U;
unsigned int var_17 = 644019698U;
unsigned long long int var_18 = 7042899089483729803ULL;
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
