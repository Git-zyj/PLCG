#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12035898133567478186ULL;
signed char var_7 = (signed char)-51;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3165043593U;
unsigned long long int var_19 = 12729816131671100989ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
