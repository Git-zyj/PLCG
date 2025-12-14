#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4075427509U;
long long int var_6 = 8307641356607116495LL;
unsigned int var_10 = 3818088122U;
long long int var_13 = 2991934508753697811LL;
int zero = 0;
long long int var_16 = -827774524214409094LL;
long long int var_17 = 3386801349396596121LL;
long long int var_18 = 7986319684692592206LL;
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
