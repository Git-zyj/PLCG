#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-21422;
int var_7 = 800201849;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8168860040600681838LL;
unsigned long long int var_11 = 8126733907649844338ULL;
int zero = 0;
unsigned long long int var_12 = 14186164221425610078ULL;
int var_13 = -213479957;
long long int var_14 = 4327216126657915022LL;
unsigned char var_15 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
