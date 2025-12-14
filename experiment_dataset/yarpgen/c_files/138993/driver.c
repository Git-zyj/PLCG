#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 870668369061625441LL;
unsigned int var_5 = 178555843U;
unsigned int var_7 = 2124656896U;
signed char var_11 = (signed char)-77;
int zero = 0;
long long int var_16 = 260442507531381917LL;
long long int var_17 = 893897514560020006LL;
long long int var_18 = 410657231923847010LL;
long long int var_19 = -2858259014585286307LL;
signed char var_20 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
