#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
unsigned long long int var_5 = 3394907282095823337ULL;
unsigned long long int var_10 = 9351163406879377256ULL;
short var_12 = (short)9370;
long long int var_17 = 62515652903566947LL;
int zero = 0;
unsigned long long int var_19 = 9610470012408807184ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)30910;
unsigned long long int var_22 = 710148890973458023ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
