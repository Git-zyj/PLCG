#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5117822889417706922LL;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)152;
unsigned int var_16 = 445878964U;
int zero = 0;
long long int var_17 = -4106009632620537852LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 14939138600803466682ULL;
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
