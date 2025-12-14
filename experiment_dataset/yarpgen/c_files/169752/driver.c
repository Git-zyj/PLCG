#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)1913;
unsigned long long int var_6 = 14521472502047717809ULL;
signed char var_10 = (signed char)-47;
unsigned long long int var_13 = 4039107350515674691ULL;
signed char var_14 = (signed char)-96;
int zero = 0;
signed char var_20 = (signed char)117;
unsigned long long int var_21 = 16997341995619751186ULL;
long long int var_22 = -2624308914217661623LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
