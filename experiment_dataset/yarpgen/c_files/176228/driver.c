#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4592644470816690435LL;
int var_1 = -1330195435;
long long int var_6 = -7261005753377695318LL;
long long int var_9 = -2823632004410176911LL;
long long int var_10 = 2962096013260246492LL;
int var_13 = 513296972;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8241235724163243395LL;
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
