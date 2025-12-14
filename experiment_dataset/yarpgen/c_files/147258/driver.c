#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14185432485110715052ULL;
unsigned short var_1 = (unsigned short)12355;
unsigned long long int var_2 = 17818440566459723761ULL;
unsigned short var_3 = (unsigned short)4433;
long long int var_5 = -2221309722287137366LL;
long long int var_7 = -3547473610754796097LL;
short var_9 = (short)-6411;
long long int var_10 = -123987311646342505LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 779106272U;
int zero = 0;
signed char var_13 = (signed char)112;
unsigned char var_14 = (unsigned char)176;
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
