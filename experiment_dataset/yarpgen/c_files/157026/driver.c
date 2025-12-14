#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
unsigned char var_3 = (unsigned char)186;
unsigned long long int var_5 = 17228362710226338841ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)241;
unsigned int var_11 = 4101647215U;
int var_12 = -437823797;
unsigned long long int var_13 = 2835386675481631114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
