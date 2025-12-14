#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3376207341U;
unsigned int var_2 = 3862082763U;
unsigned int var_3 = 1942250668U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2331565142465024987LL;
unsigned char var_9 = (unsigned char)124;
int zero = 0;
long long int var_10 = -2123034096843202302LL;
signed char var_11 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
