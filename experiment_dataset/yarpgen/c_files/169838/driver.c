#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned int var_1 = 1317172461U;
long long int var_2 = -831090270742388780LL;
_Bool var_9 = (_Bool)0;
int var_11 = -785698545;
unsigned long long int var_12 = 265298985253994288ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
