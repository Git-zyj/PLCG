#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned short var_1 = (unsigned short)50167;
long long int var_5 = -888415256158156100LL;
signed char var_6 = (signed char)59;
unsigned long long int var_7 = 5837192529772793548ULL;
signed char var_8 = (signed char)21;
long long int var_10 = -5132332742599855202LL;
int zero = 0;
unsigned int var_11 = 1248125440U;
unsigned long long int var_12 = 12723426641991245220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
