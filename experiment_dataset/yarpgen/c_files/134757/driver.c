#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1539339744;
long long int var_2 = 3742478598529649699LL;
long long int var_5 = 7329325942453600848LL;
int var_6 = -1700623644;
long long int var_9 = -4267165888034710480LL;
long long int var_10 = -3573609925769080631LL;
long long int var_11 = 696692929119611541LL;
int zero = 0;
long long int var_12 = 103120810514212840LL;
int var_13 = 1123739232;
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
