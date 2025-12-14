#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -925536511;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 9156582240264342760ULL;
short var_12 = (short)-29825;
unsigned char var_13 = (unsigned char)158;
signed char var_14 = (signed char)13;
int zero = 0;
signed char var_18 = (signed char)-3;
signed char var_19 = (signed char)87;
unsigned int var_20 = 1500196126U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
