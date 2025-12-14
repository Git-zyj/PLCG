#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 488399722;
int var_7 = -1537471977;
signed char var_11 = (signed char)110;
int zero = 0;
signed char var_12 = (signed char)59;
unsigned long long int var_13 = 5198689658146038052ULL;
int var_14 = 310853627;
long long int var_15 = -5047701650672469915LL;
signed char var_16 = (signed char)-12;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
