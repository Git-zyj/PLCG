#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1721740546613301464LL;
long long int var_4 = -5993742500688565075LL;
long long int var_8 = 6105275917468335780LL;
signed char var_9 = (signed char)-39;
unsigned int var_10 = 3662644788U;
long long int var_11 = -7895863603620577638LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
