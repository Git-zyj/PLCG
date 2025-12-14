#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2365054771U;
unsigned int var_3 = 3501797521U;
unsigned int var_4 = 809017372U;
unsigned int var_6 = 4040510635U;
unsigned int var_7 = 2192320905U;
unsigned int var_8 = 888084777U;
unsigned int var_9 = 627219120U;
unsigned int var_10 = 1611616044U;
unsigned int var_11 = 2482563705U;
unsigned int var_12 = 664129522U;
int zero = 0;
unsigned int var_14 = 3445349857U;
unsigned int var_15 = 1659381570U;
unsigned int var_16 = 1602257742U;
unsigned int var_17 = 78241408U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
