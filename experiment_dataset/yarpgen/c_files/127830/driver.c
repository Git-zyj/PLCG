#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)103;
long long int var_5 = 5563983703840658966LL;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)113;
unsigned short var_13 = (unsigned short)49135;
unsigned long long int var_16 = 3804580187184665568ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7432;
signed char var_18 = (signed char)-89;
signed char var_19 = (signed char)31;
long long int var_20 = -6596721891767967432LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
