#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2117245578;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-72;
unsigned long long int var_18 = 1082235925570289013ULL;
long long int var_19 = 6652845271957683291LL;
void init() {
}

void checksum() {
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
