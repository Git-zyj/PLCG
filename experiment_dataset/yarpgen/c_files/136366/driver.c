#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6513374636455336516LL;
short var_2 = (short)22050;
unsigned int var_8 = 3672464142U;
unsigned long long int var_14 = 16769129934463533791ULL;
int zero = 0;
signed char var_20 = (signed char)120;
unsigned long long int var_21 = 3580788292028656146ULL;
long long int var_22 = 5458398408030812538LL;
int var_23 = -91448624;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
