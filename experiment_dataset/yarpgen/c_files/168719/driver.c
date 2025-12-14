#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 851259622U;
unsigned int var_2 = 3725359755U;
unsigned short var_6 = (unsigned short)53684;
unsigned int var_7 = 3068624512U;
unsigned int var_10 = 1327630652U;
int zero = 0;
short var_11 = (short)-32297;
unsigned int var_12 = 3445074403U;
unsigned short var_13 = (unsigned short)59349;
void init() {
}

void checksum() {
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
