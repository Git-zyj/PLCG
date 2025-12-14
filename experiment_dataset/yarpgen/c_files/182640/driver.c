#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -866194179;
short var_6 = (short)10485;
unsigned long long int var_10 = 9785505993588039749ULL;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 11062182276747764353ULL;
unsigned short var_21 = (unsigned short)38781;
signed char var_22 = (signed char)-105;
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
