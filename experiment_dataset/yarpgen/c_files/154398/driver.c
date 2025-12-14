#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8714123531925594708ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)25290;
int zero = 0;
int var_11 = 2112522553;
unsigned long long int var_12 = 16313411314627488732ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
