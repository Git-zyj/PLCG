#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
unsigned char var_3 = (unsigned char)127;
unsigned long long int var_5 = 1081714626449525617ULL;
unsigned long long int var_10 = 13903444809993868079ULL;
int zero = 0;
long long int var_12 = 5150674791320498941LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
