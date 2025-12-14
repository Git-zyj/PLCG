#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 5728696345230338816ULL;
int var_9 = -592240;
unsigned long long int var_14 = 4103680063425925757ULL;
long long int var_16 = -4172543211716773950LL;
int zero = 0;
unsigned short var_20 = (unsigned short)62072;
signed char var_21 = (signed char)-46;
signed char var_22 = (signed char)-93;
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
