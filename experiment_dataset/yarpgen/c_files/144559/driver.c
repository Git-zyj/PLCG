#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_7 = (short)-15316;
long long int var_9 = -4640991104749144970LL;
int zero = 0;
unsigned long long int var_12 = 12800895406932537546ULL;
long long int var_13 = 5978842349285836593LL;
unsigned long long int var_14 = 10920480055292956166ULL;
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
