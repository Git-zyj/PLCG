#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2214752290U;
unsigned short var_3 = (unsigned short)13273;
unsigned long long int var_9 = 13066977993344542140ULL;
unsigned long long int var_11 = 3164068980058265899ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)2151;
signed char var_15 = (signed char)-82;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
