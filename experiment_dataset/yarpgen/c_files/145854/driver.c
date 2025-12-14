#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)27;
unsigned short var_9 = (unsigned short)41380;
unsigned long long int var_10 = 10905046790033192242ULL;
unsigned int var_13 = 1415683488U;
_Bool var_15 = (_Bool)1;
signed char var_18 = (signed char)-92;
unsigned long long int var_19 = 2929476051853411093ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)10015;
_Bool var_21 = (_Bool)0;
long long int var_22 = -1966334589099251106LL;
signed char var_23 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
