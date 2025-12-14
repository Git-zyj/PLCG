#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18677;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 15308343189055202644ULL;
int zero = 0;
int var_10 = -1122150428;
long long int var_11 = -4601587421597407385LL;
unsigned long long int var_12 = 2859554391408536281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
