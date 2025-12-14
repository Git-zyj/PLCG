#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6016629859736651971LL;
_Bool var_8 = (_Bool)1;
long long int var_19 = 1852933908124341700LL;
int zero = 0;
unsigned long long int var_20 = 15130939853754867319ULL;
unsigned int var_21 = 1820542176U;
void init() {
}

void checksum() {
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
