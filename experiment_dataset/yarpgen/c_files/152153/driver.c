#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_7 = (unsigned short)21353;
unsigned short var_9 = (unsigned short)27003;
long long int var_14 = 6869357294144242006LL;
unsigned short var_18 = (unsigned short)29040;
int zero = 0;
unsigned short var_20 = (unsigned short)25276;
unsigned short var_21 = (unsigned short)64293;
_Bool var_22 = (_Bool)1;
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
