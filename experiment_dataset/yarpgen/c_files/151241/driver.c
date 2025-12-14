#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5429226549829441278LL;
long long int var_7 = 3598570064341744819LL;
long long int var_10 = 5983900900219538542LL;
int zero = 0;
signed char var_13 = (signed char)53;
int var_14 = -508083421;
signed char var_15 = (signed char)2;
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
