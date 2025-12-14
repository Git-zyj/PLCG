#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17653885338913410515ULL;
long long int var_5 = -995245215180740596LL;
signed char var_7 = (signed char)-85;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11332052792413224161ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)197;
unsigned char var_16 = (unsigned char)221;
void init() {
}

void checksum() {
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
