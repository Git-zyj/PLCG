#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 33812170U;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 13556430532264945878ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)3387;
void init() {
}

void checksum() {
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
