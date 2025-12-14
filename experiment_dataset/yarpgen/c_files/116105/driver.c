#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1205048836U;
unsigned long long int var_9 = 370723614725823657ULL;
signed char var_16 = (signed char)61;
int zero = 0;
signed char var_18 = (signed char)-17;
long long int var_19 = -811800270691783642LL;
unsigned int var_20 = 3970900955U;
int var_21 = 120312158;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
