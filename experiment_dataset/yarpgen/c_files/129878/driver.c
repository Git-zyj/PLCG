#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 8032276768267936108ULL;
unsigned long long int var_8 = 8728504588734511863ULL;
unsigned long long int var_9 = 9494504056572090995ULL;
int zero = 0;
unsigned long long int var_12 = 15134282561046589969ULL;
unsigned long long int var_13 = 12985584297563630964ULL;
unsigned long long int var_14 = 5706423849824294362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
