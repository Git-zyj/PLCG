#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15240;
signed char var_4 = (signed char)-88;
unsigned short var_5 = (unsigned short)47562;
long long int var_6 = -4510073962020639994LL;
signed char var_9 = (signed char)93;
unsigned short var_10 = (unsigned short)16434;
int zero = 0;
long long int var_12 = -3909802806550205731LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
