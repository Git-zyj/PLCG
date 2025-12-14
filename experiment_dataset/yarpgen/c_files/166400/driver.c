#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17885146243884497188ULL;
unsigned short var_9 = (unsigned short)58510;
unsigned long long int var_12 = 17765364391805221101ULL;
unsigned short var_13 = (unsigned short)51237;
short var_14 = (short)-3251;
int zero = 0;
unsigned long long int var_17 = 8978606034987511130ULL;
unsigned long long int var_18 = 9006979231920003992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
