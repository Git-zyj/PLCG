#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2760325187328254792LL;
unsigned long long int var_2 = 10871168925606909937ULL;
unsigned long long int var_4 = 17517440895508879265ULL;
int var_6 = -1442542901;
int var_13 = 1497343446;
int zero = 0;
short var_17 = (short)11868;
unsigned long long int var_18 = 12088083816967312589ULL;
unsigned long long int var_19 = 12902192732866311950ULL;
_Bool var_20 = (_Bool)1;
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
