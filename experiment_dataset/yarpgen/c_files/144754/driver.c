#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -209753763;
unsigned long long int var_5 = 7142552038321100609ULL;
long long int var_7 = -7388507357328505119LL;
unsigned long long int var_16 = 17570763344999392911ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)15;
int var_19 = 1434476102;
unsigned long long int var_20 = 6948896621675662069ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
