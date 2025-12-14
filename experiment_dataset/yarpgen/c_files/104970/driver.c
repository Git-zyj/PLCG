#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1173315340U;
unsigned long long int var_3 = 12150912820251061109ULL;
long long int var_6 = 2682322628099844740LL;
unsigned int var_12 = 1192891947U;
unsigned long long int var_16 = 33066913161279792ULL;
int zero = 0;
unsigned int var_18 = 2709693588U;
unsigned int var_19 = 3102019429U;
unsigned long long int var_20 = 18296169006666063983ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
