#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4814047871675882796ULL;
int zero = 0;
short var_17 = (short)21265;
unsigned short var_18 = (unsigned short)41154;
unsigned int var_19 = 3181029514U;
unsigned long long int var_20 = 6034507879067386945ULL;
long long int var_21 = -4690879387473680360LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
