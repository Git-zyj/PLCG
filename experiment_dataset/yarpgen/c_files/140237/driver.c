#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15034506116297439930ULL;
_Bool var_1 = (_Bool)1;
int var_2 = -1695970507;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-44;
unsigned long long int var_7 = 4458189249133992874ULL;
int zero = 0;
unsigned long long int var_10 = 15886768052854771011ULL;
unsigned long long int var_11 = 4255346922018543592ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
