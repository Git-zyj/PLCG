#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 590504308;
unsigned int var_1 = 2083668775U;
unsigned int var_3 = 1303074243U;
unsigned char var_6 = (unsigned char)200;
unsigned long long int var_7 = 10100887169044549764ULL;
unsigned long long int var_9 = 12327317591426775324ULL;
int var_10 = -957453738;
unsigned int var_11 = 1672170542U;
_Bool var_12 = (_Bool)1;
int var_13 = -392425481;
unsigned char var_14 = (unsigned char)58;
int var_16 = 1918792340;
int zero = 0;
unsigned long long int var_17 = 8856731978039889594ULL;
long long int var_18 = 4446819791227068432LL;
void init() {
}

void checksum() {
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
