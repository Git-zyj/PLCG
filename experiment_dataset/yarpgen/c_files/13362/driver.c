#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4934703149062093752LL;
unsigned short var_3 = (unsigned short)43497;
unsigned long long int var_4 = 8445442245368733508ULL;
signed char var_5 = (signed char)16;
unsigned long long int var_6 = 8539011526431727226ULL;
unsigned long long int var_9 = 285121556416322053ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 15469122562141368887ULL;
int zero = 0;
signed char var_15 = (signed char)-127;
signed char var_16 = (signed char)97;
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
