#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -4889774377103428262LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 5411024569907626918ULL;
int zero = 0;
short var_18 = (short)-23303;
long long int var_19 = 823594611185617698LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
