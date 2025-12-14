#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1077100677;
long long int var_9 = -3120747781771166403LL;
long long int var_12 = -6162815890878000460LL;
unsigned char var_15 = (unsigned char)96;
int zero = 0;
long long int var_18 = 5411223819592457902LL;
long long int var_19 = -5961199795267316205LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
