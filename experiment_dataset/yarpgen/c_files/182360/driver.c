#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-2581;
unsigned long long int var_5 = 16365970855579812302ULL;
unsigned long long int var_8 = 10533589793596923260ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)202;
long long int var_12 = 3385894799656485484LL;
signed char var_13 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
