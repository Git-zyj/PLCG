#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 899315586;
unsigned long long int var_1 = 5733966220484427266ULL;
signed char var_5 = (signed char)20;
long long int var_7 = 8901093687590801973LL;
long long int var_13 = -4933864069424254217LL;
int zero = 0;
int var_15 = -1298013444;
long long int var_16 = 995115022096282119LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
