#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)2;
unsigned long long int var_8 = 9623699266675241620ULL;
int var_11 = 1226282194;
int zero = 0;
unsigned long long int var_12 = 17802528057339679160ULL;
int var_13 = 1730918745;
int var_14 = -318568773;
int var_15 = -1001117398;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
