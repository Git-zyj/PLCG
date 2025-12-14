#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1222157767494694448LL;
unsigned long long int var_5 = 1932203518430804285ULL;
short var_7 = (short)19544;
short var_9 = (short)13545;
int zero = 0;
long long int var_10 = -5302394409654689767LL;
long long int var_11 = -2594652813736159318LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
