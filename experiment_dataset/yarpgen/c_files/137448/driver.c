#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 175865077521880140ULL;
signed char var_11 = (signed char)49;
int zero = 0;
signed char var_17 = (signed char)-114;
signed char var_18 = (signed char)41;
unsigned long long int var_19 = 7566510048532890100ULL;
unsigned long long int var_20 = 3382163569976224689ULL;
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
