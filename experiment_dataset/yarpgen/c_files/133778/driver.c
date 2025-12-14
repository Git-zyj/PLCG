#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1299872803723792320LL;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-125;
unsigned int var_12 = 2480018218U;
unsigned int var_13 = 2874338035U;
unsigned int var_15 = 2551305922U;
unsigned long long int var_17 = 6081140923152699931ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)128;
unsigned char var_20 = (unsigned char)104;
int var_21 = 5800000;
void init() {
}

void checksum() {
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
