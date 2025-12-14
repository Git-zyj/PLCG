#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 6219340547222044926ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_16 = 2280685490U;
unsigned int var_18 = 3492579805U;
int zero = 0;
unsigned long long int var_20 = 11755464997294742410ULL;
unsigned char var_21 = (unsigned char)67;
void init() {
}

void checksum() {
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
