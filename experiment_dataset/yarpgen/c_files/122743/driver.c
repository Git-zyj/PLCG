#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2642686904U;
unsigned int var_5 = 2561852587U;
long long int var_15 = -3694736233104681052LL;
int zero = 0;
long long int var_17 = -3016572783918712023LL;
int var_18 = -619333107;
unsigned short var_19 = (unsigned short)40851;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
