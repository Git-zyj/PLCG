#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)111;
int var_9 = 2073795379;
long long int var_11 = -4432627221622494271LL;
unsigned long long int var_13 = 6892534758247121361ULL;
int zero = 0;
signed char var_14 = (signed char)82;
unsigned long long int var_15 = 2885802302500718468ULL;
void init() {
}

void checksum() {
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
