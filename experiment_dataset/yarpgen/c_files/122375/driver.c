#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
signed char var_4 = (signed char)53;
unsigned char var_9 = (unsigned char)17;
unsigned int var_14 = 3941372337U;
long long int var_16 = -3498952041569186573LL;
unsigned long long int var_17 = 13941346184909068218ULL;
long long int var_18 = 8274162860228650872LL;
int zero = 0;
unsigned long long int var_20 = 2099851153707036916ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7114349362928013487LL;
long long int var_23 = -8331448445000532558LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
