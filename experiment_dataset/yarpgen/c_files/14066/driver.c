#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10142951279371896151ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_9 = 13834640166914791550ULL;
int zero = 0;
unsigned long long int var_10 = 7523114942033432884ULL;
unsigned char var_11 = (unsigned char)198;
_Bool var_12 = (_Bool)0;
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
