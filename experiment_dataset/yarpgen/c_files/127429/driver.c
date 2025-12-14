#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
unsigned long long int var_6 = 7718544792687241774ULL;
long long int var_7 = -1048887690386632384LL;
short var_9 = (short)-29814;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
unsigned int var_15 = 3301799470U;
long long int var_16 = 7737652090843164247LL;
unsigned int var_17 = 3443356382U;
unsigned long long int var_18 = 7128098771100171403ULL;
int var_19 = 1697429496;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
