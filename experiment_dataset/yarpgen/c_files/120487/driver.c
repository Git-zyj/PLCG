#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23467;
short var_4 = (short)22123;
short var_5 = (short)5606;
short var_12 = (short)12877;
int zero = 0;
short var_18 = (short)11163;
long long int var_19 = 7232050828519906740LL;
signed char var_20 = (signed char)-19;
short var_21 = (short)15215;
long long int var_22 = 2615485729954556967LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
