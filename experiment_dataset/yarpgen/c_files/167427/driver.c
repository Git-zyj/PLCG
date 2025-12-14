#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8714824039714502210LL;
long long int var_1 = -5555150536415856910LL;
long long int var_2 = 5019745172513117159LL;
signed char var_3 = (signed char)101;
_Bool var_4 = (_Bool)0;
short var_5 = (short)2951;
unsigned char var_7 = (unsigned char)146;
unsigned char var_8 = (unsigned char)245;
long long int var_9 = -7380416189892815440LL;
int zero = 0;
unsigned long long int var_10 = 12356552682848516154ULL;
int var_11 = -272788334;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
