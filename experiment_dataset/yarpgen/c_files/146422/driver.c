#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)47;
long long int var_4 = -361634251627874706LL;
int var_8 = -1747672600;
int var_10 = 1458230803;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3402856085344428099ULL;
signed char var_13 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
