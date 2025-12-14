#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -747264828;
long long int var_3 = 5697501656203683373LL;
unsigned long long int var_4 = 10860460022614980525ULL;
unsigned long long int var_7 = 14662880126051032108ULL;
signed char var_8 = (signed char)35;
int var_9 = -530749685;
long long int var_11 = 3262353193457225215LL;
int zero = 0;
unsigned long long int var_12 = 11081550233055081554ULL;
unsigned long long int var_13 = 357382690537454915ULL;
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
