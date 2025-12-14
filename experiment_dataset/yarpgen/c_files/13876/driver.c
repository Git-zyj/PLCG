#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4538371059631425746LL;
long long int var_1 = -6067777479978082322LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16740176417204302388ULL;
unsigned long long int var_7 = 12104375560392126159ULL;
unsigned char var_8 = (unsigned char)15;
int zero = 0;
long long int var_10 = 7167319764471318463LL;
unsigned long long int var_11 = 207599659642110885ULL;
signed char var_12 = (signed char)37;
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
