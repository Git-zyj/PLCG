#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9365601898026498072ULL;
signed char var_5 = (signed char)38;
_Bool var_6 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 4824309532252491996ULL;
unsigned char var_21 = (unsigned char)1;
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
