#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17830623897024293313ULL;
unsigned short var_6 = (unsigned short)27288;
unsigned long long int var_7 = 16322178895513170910ULL;
unsigned long long int var_9 = 1417439565987003505ULL;
long long int var_11 = -7180928282504865921LL;
long long int var_14 = 2496315582410684624LL;
int var_16 = -236067688;
int zero = 0;
int var_18 = 1286690946;
int var_19 = 1180238210;
void init() {
}

void checksum() {
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
