#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8462157315533964634LL;
long long int var_4 = -3178547977961987930LL;
unsigned int var_5 = 3312975178U;
unsigned int var_7 = 1499593348U;
long long int var_8 = -7336492597628119863LL;
long long int var_9 = -6331584364047606451LL;
unsigned int var_10 = 2541213397U;
unsigned int var_11 = 3916600399U;
int zero = 0;
unsigned int var_12 = 3374448279U;
unsigned int var_13 = 3869885061U;
void init() {
}

void checksum() {
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
