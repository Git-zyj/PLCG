#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)25249;
unsigned long long int var_10 = 16616040175060193108ULL;
unsigned char var_11 = (unsigned char)86;
int zero = 0;
unsigned long long int var_12 = 3361310431031667522ULL;
long long int var_13 = -6847651029359855523LL;
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
