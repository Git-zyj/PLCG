#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16602254255952544788ULL;
unsigned long long int var_8 = 7458745097475864899ULL;
unsigned int var_9 = 3497779730U;
unsigned long long int var_13 = 148086234632956838ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 720133293U;
int zero = 0;
short var_20 = (short)-5150;
signed char var_21 = (signed char)15;
signed char var_22 = (signed char)102;
void init() {
}

void checksum() {
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
