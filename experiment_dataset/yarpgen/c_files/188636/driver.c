#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3120972465U;
long long int var_9 = 4335219453213446206LL;
unsigned short var_12 = (unsigned short)57333;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-76;
signed char var_20 = (signed char)122;
unsigned int var_21 = 3047117215U;
unsigned long long int var_22 = 9887198146139755071ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
