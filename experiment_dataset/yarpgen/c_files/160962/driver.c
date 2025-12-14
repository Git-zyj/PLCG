#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2778145487151973434LL;
unsigned int var_1 = 2012381605U;
long long int var_3 = -2653384861701115031LL;
unsigned int var_4 = 616558300U;
long long int var_9 = -1168106137229080386LL;
int var_11 = 1527501585;
int zero = 0;
int var_13 = 379464228;
long long int var_14 = 8823380996093852251LL;
long long int var_15 = 3702966165052264553LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
