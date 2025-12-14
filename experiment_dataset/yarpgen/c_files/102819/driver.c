#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4265825344924787099LL;
_Bool var_8 = (_Bool)1;
long long int var_10 = 5286212681274257419LL;
int zero = 0;
unsigned long long int var_13 = 11564844187255145543ULL;
unsigned short var_14 = (unsigned short)2296;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
