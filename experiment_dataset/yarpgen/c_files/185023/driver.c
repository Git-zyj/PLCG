#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3523367891974047222LL;
unsigned short var_8 = (unsigned short)7454;
int zero = 0;
unsigned long long int var_14 = 17140523061001754458ULL;
long long int var_15 = -6554283767293471220LL;
long long int var_16 = -7410015277482860841LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
