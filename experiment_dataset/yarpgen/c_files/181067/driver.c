#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-40;
int var_7 = -1284828389;
signed char var_9 = (signed char)79;
signed char var_10 = (signed char)-120;
unsigned int var_12 = 3283591898U;
unsigned long long int var_15 = 4733065432555104002ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)59;
unsigned char var_17 = (unsigned char)18;
unsigned long long int var_18 = 15077766440380364087ULL;
int var_19 = -1472709943;
long long int var_20 = -7198743759763536689LL;
unsigned char var_21 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
