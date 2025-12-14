#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 311739481655224752LL;
long long int var_4 = 6159591692897248393LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6842867430455860356LL;
_Bool var_13 = (_Bool)1;
long long int var_16 = 869686137535326231LL;
int zero = 0;
long long int var_17 = -3194263720412506660LL;
long long int var_18 = 1114300599008805675LL;
long long int var_19 = 7141432037419541417LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
