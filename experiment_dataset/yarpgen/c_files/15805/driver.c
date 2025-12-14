#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -785677176676832242LL;
long long int var_7 = 5488060064362387950LL;
unsigned short var_11 = (unsigned short)32932;
long long int var_13 = 3747772304176882007LL;
int zero = 0;
long long int var_16 = -4061241773516695131LL;
long long int var_17 = -5206359487683415623LL;
long long int var_18 = 3422512476862378603LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
