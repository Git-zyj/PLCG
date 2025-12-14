#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6774213356837643022ULL;
long long int var_1 = -2545103512533098932LL;
unsigned long long int var_2 = 7076369016690318836ULL;
int zero = 0;
int var_20 = 417392969;
int var_21 = 236308145;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
