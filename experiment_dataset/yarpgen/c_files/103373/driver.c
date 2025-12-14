#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1971493451651917800LL;
long long int var_7 = 7829857218269335592LL;
long long int var_8 = -4786202903568606399LL;
long long int var_9 = -1607407374154649731LL;
int var_11 = -1347493308;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_18 = 3777350554U;
int zero = 0;
unsigned char var_20 = (unsigned char)159;
unsigned long long int var_21 = 1015356972812008996ULL;
void init() {
}

void checksum() {
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
