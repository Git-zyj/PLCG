#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -948393177;
long long int var_3 = -3043370601096076115LL;
long long int var_5 = -4591484395546888932LL;
unsigned short var_11 = (unsigned short)35118;
int zero = 0;
int var_18 = 1488495113;
long long int var_19 = 8671547421489077535LL;
unsigned long long int var_20 = 9191740905728684128ULL;
int var_21 = 986696648;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
