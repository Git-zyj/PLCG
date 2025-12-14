#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15751591366431679220ULL;
unsigned short var_5 = (unsigned short)41522;
unsigned long long int var_8 = 16886985400298738191ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-1;
unsigned long long int var_15 = 10058714198922184183ULL;
void init() {
}

void checksum() {
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
