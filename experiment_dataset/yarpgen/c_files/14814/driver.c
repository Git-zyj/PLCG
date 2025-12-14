#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
short var_2 = (short)-9531;
unsigned long long int var_7 = 1174990904616733352ULL;
_Bool var_14 = (_Bool)0;
unsigned long long int var_16 = 2264172478921707854ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 5157122226818402298ULL;
int var_20 = -1285571727;
signed char var_21 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
