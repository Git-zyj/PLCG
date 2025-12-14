#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11137071000540745755ULL;
short var_7 = (short)6566;
int var_9 = -2087306507;
unsigned long long int var_13 = 4863897838223233355ULL;
int var_15 = -145456804;
int var_16 = 713440884;
int zero = 0;
unsigned int var_19 = 848962365U;
signed char var_20 = (signed char)-78;
short var_21 = (short)-29021;
void init() {
}

void checksum() {
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
