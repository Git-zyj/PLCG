#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-99;
long long int var_7 = -4871585474566398693LL;
signed char var_8 = (signed char)-82;
signed char var_9 = (signed char)110;
unsigned long long int var_10 = 13748966449131648768ULL;
unsigned int var_14 = 1708224740U;
signed char var_17 = (signed char)44;
unsigned short var_19 = (unsigned short)24052;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4691255194034951740LL;
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
