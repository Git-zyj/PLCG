#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17525064546483398387ULL;
unsigned long long int var_3 = 5930737604103431134ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 8491646098533053468ULL;
int zero = 0;
signed char var_10 = (signed char)-9;
signed char var_11 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
