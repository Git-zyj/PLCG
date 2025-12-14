#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
int var_6 = 1838042672;
unsigned long long int var_7 = 8377639608899298438ULL;
unsigned long long int var_8 = 1903642177276538911ULL;
unsigned long long int var_11 = 16480730776200030692ULL;
int zero = 0;
long long int var_19 = 3121777544915853509LL;
unsigned long long int var_20 = 7602596010455451200ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
