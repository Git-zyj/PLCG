#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1082573708995329151LL;
long long int var_1 = 218578408202131341LL;
long long int var_8 = -1370928895536088664LL;
long long int var_9 = 1535403374095838610LL;
int zero = 0;
long long int var_13 = 3195385947726356395LL;
long long int var_14 = 1172573100691104411LL;
long long int var_15 = -8040125446471770777LL;
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
