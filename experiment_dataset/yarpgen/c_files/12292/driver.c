#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)22;
short var_3 = (short)-17583;
int var_5 = -1460870183;
unsigned int var_9 = 3563469259U;
signed char var_12 = (signed char)-7;
unsigned int var_18 = 687011726U;
int zero = 0;
unsigned long long int var_19 = 14748217575736846631ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3451986106U;
void init() {
}

void checksum() {
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
