#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -807155857;
unsigned int var_4 = 2751509313U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_10 = 995006446776918608ULL;
unsigned int var_11 = 3633544001U;
int zero = 0;
int var_18 = 986571105;
unsigned char var_19 = (unsigned char)44;
signed char var_20 = (signed char)96;
signed char var_21 = (signed char)40;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
