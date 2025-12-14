#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -934678637;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6976416123837436725ULL;
unsigned long long int var_11 = 1747159006014221584ULL;
signed char var_14 = (signed char)65;
long long int var_15 = 4319558524181872318LL;
int zero = 0;
long long int var_20 = -3010972080571574280LL;
unsigned char var_21 = (unsigned char)95;
unsigned int var_22 = 4069859092U;
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
