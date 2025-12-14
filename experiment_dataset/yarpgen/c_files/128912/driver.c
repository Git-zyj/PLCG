#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6308552242238641665LL;
int var_5 = -773919061;
long long int var_11 = 492041782332296374LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)37;
int var_15 = 683921463;
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
