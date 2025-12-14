#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-107;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)104;
int var_13 = 1336478010;
signed char var_15 = (signed char)2;
int zero = 0;
unsigned long long int var_16 = 5131534185412913270ULL;
long long int var_17 = 1200748119840915299LL;
unsigned int var_18 = 465116818U;
unsigned long long int var_19 = 9697991929790572870ULL;
void init() {
}

void checksum() {
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
