#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2824439993U;
unsigned long long int var_6 = 8103130268860920522ULL;
signed char var_18 = (signed char)102;
int var_19 = 1575525587;
int zero = 0;
long long int var_20 = 39060902023141350LL;
long long int var_21 = -6730112229341467646LL;
void init() {
}

void checksum() {
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
