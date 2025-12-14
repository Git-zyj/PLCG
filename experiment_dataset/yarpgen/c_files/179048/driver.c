#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6229456548106968922LL;
signed char var_8 = (signed char)121;
int var_11 = -1009544031;
int zero = 0;
long long int var_14 = -1828896159147246577LL;
int var_15 = -924134991;
short var_16 = (short)25434;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
