#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)234;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 2138254430U;
unsigned long long int var_10 = 9176461285150627726ULL;
int zero = 0;
unsigned long long int var_12 = 17952131229529352548ULL;
signed char var_13 = (signed char)-67;
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
