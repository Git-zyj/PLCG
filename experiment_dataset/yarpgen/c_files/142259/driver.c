#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9530044331857329025ULL;
unsigned char var_1 = (unsigned char)74;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 17581501191708613302ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_10 = (short)16093;
signed char var_11 = (signed char)-120;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
