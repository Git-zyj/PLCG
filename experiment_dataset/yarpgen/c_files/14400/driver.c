#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1629949519;
unsigned long long int var_1 = 1658450496148348835ULL;
unsigned long long int var_3 = 168764426297796686ULL;
unsigned long long int var_8 = 11181097596980058444ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int var_11 = -1255796912;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-13;
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
