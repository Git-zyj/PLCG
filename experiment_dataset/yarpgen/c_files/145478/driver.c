#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1736598897U;
unsigned long long int var_5 = 3909116926492547625ULL;
unsigned int var_9 = 507189176U;
unsigned long long int var_11 = 12194568652667936729ULL;
int zero = 0;
unsigned int var_12 = 2511494460U;
signed char var_13 = (signed char)107;
long long int var_14 = -7236451988629919267LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
