#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)27198;
int var_12 = 1931999737;
int var_13 = -139788337;
unsigned long long int var_17 = 5931855759398626586ULL;
long long int var_18 = -3476969271294307517LL;
int zero = 0;
unsigned char var_20 = (unsigned char)46;
long long int var_21 = -6288048090987834419LL;
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
