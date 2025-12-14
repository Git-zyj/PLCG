#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17909329125221476699ULL;
unsigned long long int var_9 = 8822339759205576513ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3058220515508758693LL;
int zero = 0;
unsigned long long int var_16 = 12127038075818235248ULL;
unsigned char var_17 = (unsigned char)12;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
