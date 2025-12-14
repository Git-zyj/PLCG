#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 565619336U;
unsigned long long int var_2 = 7756544750674932282ULL;
long long int var_3 = 9054825783907448048LL;
long long int var_4 = 705821209019623929LL;
long long int var_10 = 5066932152689266976LL;
int zero = 0;
int var_13 = 1705553549;
long long int var_14 = 1237553829879327416LL;
unsigned long long int var_15 = 5151906090503954929ULL;
void init() {
}

void checksum() {
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
