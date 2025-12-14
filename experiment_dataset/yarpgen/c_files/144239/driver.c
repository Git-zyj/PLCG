#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8732177239854193236ULL;
unsigned long long int var_6 = 13264331532097380814ULL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 460229204U;
signed char var_12 = (signed char)46;
int var_13 = 1505031914;
int zero = 0;
unsigned short var_16 = (unsigned short)36434;
unsigned short var_17 = (unsigned short)59547;
unsigned char var_18 = (unsigned char)154;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
