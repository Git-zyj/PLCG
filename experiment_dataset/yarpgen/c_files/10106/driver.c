#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8818127286304083561ULL;
unsigned int var_7 = 3397258858U;
long long int var_11 = -5483171640524562195LL;
short var_12 = (short)-13295;
int zero = 0;
unsigned short var_13 = (unsigned short)31016;
long long int var_14 = -8101341714130179537LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
