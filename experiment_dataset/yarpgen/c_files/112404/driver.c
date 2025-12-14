#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 941014423;
long long int var_9 = -4788629802644394402LL;
unsigned long long int var_11 = 14178868423083651588ULL;
unsigned long long int var_17 = 722672618449833435ULL;
unsigned int var_18 = 901604414U;
unsigned char var_19 = (unsigned char)87;
int zero = 0;
signed char var_20 = (signed char)-67;
int var_21 = -1202137661;
long long int var_22 = -810341951847635317LL;
void init() {
}

void checksum() {
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
