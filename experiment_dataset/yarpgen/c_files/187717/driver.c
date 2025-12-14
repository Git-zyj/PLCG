#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-25;
long long int var_6 = -982969645948861050LL;
signed char var_7 = (signed char)-55;
long long int var_8 = -7479257268671391795LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-48;
long long int var_12 = -808759277063088632LL;
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
