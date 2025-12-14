#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16893790562831645519ULL;
long long int var_7 = -8983118537334723785LL;
unsigned long long int var_8 = 10786677464150447229ULL;
signed char var_12 = (signed char)22;
unsigned short var_14 = (unsigned short)27291;
int zero = 0;
long long int var_17 = 2520759351330447218LL;
unsigned short var_18 = (unsigned short)59120;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
