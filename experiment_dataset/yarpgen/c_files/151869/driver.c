#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)29;
long long int var_10 = -813718004843931804LL;
int var_11 = 1946054437;
unsigned long long int var_14 = 16297191055802725441ULL;
int zero = 0;
unsigned int var_17 = 1000119836U;
long long int var_18 = -6898056879314216525LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
