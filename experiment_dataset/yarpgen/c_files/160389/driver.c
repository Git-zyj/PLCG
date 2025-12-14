#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1521792828U;
signed char var_2 = (signed char)39;
long long int var_10 = 3058021528189242133LL;
int zero = 0;
unsigned short var_18 = (unsigned short)11487;
long long int var_19 = -7477852532305287966LL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3874980477U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
