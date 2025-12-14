#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1560174790;
signed char var_1 = (signed char)77;
_Bool var_3 = (_Bool)0;
signed char var_10 = (signed char)114;
unsigned long long int var_12 = 17841279458447551161ULL;
unsigned long long int var_16 = 7212600000777585527ULL;
int zero = 0;
unsigned long long int var_20 = 16182701494863922298ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
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
