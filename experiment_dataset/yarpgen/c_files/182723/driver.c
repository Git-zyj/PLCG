#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1870819666546874516LL;
long long int var_4 = -504892380312828994LL;
int var_11 = -366923009;
int var_18 = -2026838486;
int zero = 0;
long long int var_19 = -5655388279036107038LL;
short var_20 = (short)-199;
long long int var_21 = 788513379537478468LL;
long long int var_22 = -6768338686532314982LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
