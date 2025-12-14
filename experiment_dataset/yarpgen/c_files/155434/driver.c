#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5694;
unsigned short var_2 = (unsigned short)31917;
signed char var_9 = (signed char)-79;
int zero = 0;
long long int var_18 = -2740897371402317466LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 137783243U;
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
