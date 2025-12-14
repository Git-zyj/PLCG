#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1704302886557314644ULL;
long long int var_2 = -1107743942703110273LL;
_Bool var_3 = (_Bool)0;
int zero = 0;
int var_11 = 858102932;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)15;
void init() {
}

void checksum() {
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
