#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
signed char var_2 = (signed char)120;
long long int var_4 = 5570304168971925061LL;
long long int var_7 = -6844508011008831949LL;
long long int var_10 = 3008309013936306727LL;
int var_11 = 483339763;
long long int var_13 = -5004594053346711482LL;
long long int var_15 = -2819942751610813619LL;
int zero = 0;
long long int var_17 = 5482468500357386099LL;
int var_18 = 1423912070;
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
