#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12908042064110391118ULL;
unsigned long long int var_10 = 3145339525380970479ULL;
unsigned long long int var_12 = 7548470982711485507ULL;
unsigned long long int var_14 = 13213835399646822516ULL;
int zero = 0;
unsigned long long int var_16 = 15025321192496175660ULL;
unsigned long long int var_17 = 10839038551177858623ULL;
unsigned long long int var_18 = 11976969512947152457ULL;
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
