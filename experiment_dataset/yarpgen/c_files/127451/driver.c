#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 306678674U;
unsigned short var_3 = (unsigned short)7441;
long long int var_5 = 1016208959498927527LL;
unsigned long long int var_9 = 17562434691140523164ULL;
long long int var_13 = -4294752444944719108LL;
_Bool var_14 = (_Bool)0;
long long int var_16 = -7174636650275791585LL;
int zero = 0;
int var_17 = -1967404977;
int var_18 = -1484969251;
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
