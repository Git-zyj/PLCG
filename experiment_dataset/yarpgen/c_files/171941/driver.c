#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)146;
unsigned long long int var_3 = 9864493588517192118ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)35;
unsigned long long int var_7 = 11228810225482895140ULL;
int zero = 0;
long long int var_11 = 6784149112026796208LL;
signed char var_12 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
