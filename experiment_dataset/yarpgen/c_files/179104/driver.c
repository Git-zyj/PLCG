#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)216;
signed char var_10 = (signed char)93;
int zero = 0;
unsigned long long int var_15 = 6299443846009713468ULL;
signed char var_16 = (signed char)-57;
signed char var_17 = (signed char)35;
long long int var_18 = 8898665802421730474LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
