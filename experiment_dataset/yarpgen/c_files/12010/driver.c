#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)30;
long long int var_2 = 8237722298103276806LL;
unsigned long long int var_5 = 15701937852252148559ULL;
unsigned long long int var_8 = 9240515338849036268ULL;
unsigned int var_9 = 4145160283U;
unsigned long long int var_11 = 4346337177634303714ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)44;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
