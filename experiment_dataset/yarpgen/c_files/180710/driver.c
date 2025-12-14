#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-17;
unsigned int var_9 = 509674023U;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 6512919005459913983LL;
signed char var_19 = (signed char)109;
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
