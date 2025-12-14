#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
int var_1 = -32497167;
int var_2 = -19977382;
unsigned int var_3 = 1453831854U;
unsigned long long int var_4 = 12926890792518873687ULL;
unsigned char var_6 = (unsigned char)208;
unsigned int var_9 = 124323960U;
long long int var_10 = 3341480898521867425LL;
long long int var_11 = -7973905154001101394LL;
long long int var_13 = -2472026705393409744LL;
int zero = 0;
signed char var_17 = (signed char)2;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)121;
signed char var_20 = (signed char)24;
signed char var_21 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
