#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29385;
unsigned int var_3 = 2937828321U;
short var_6 = (short)-16044;
long long int var_12 = -8944664962167273252LL;
int zero = 0;
unsigned long long int var_13 = 9355219173243369548ULL;
signed char var_14 = (signed char)-33;
unsigned int var_15 = 116982910U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
