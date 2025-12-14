#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13911769193995986626ULL;
long long int var_2 = -7894500209395057693LL;
signed char var_3 = (signed char)13;
signed char var_4 = (signed char)-47;
int zero = 0;
signed char var_10 = (signed char)123;
long long int var_11 = 5313013262972027459LL;
_Bool var_12 = (_Bool)1;
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
