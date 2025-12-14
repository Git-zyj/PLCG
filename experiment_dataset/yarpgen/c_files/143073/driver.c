#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7546095415479940402LL;
long long int var_2 = 1174095190568582317LL;
unsigned int var_5 = 4204685871U;
unsigned long long int var_7 = 18344849965951285600ULL;
int zero = 0;
long long int var_10 = 8199510226375894997LL;
long long int var_11 = -5636665949239776216LL;
unsigned short var_12 = (unsigned short)1701;
unsigned long long int var_13 = 11090003686082140083ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
