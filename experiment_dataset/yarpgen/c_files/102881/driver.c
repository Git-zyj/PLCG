#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 916109876960147699LL;
signed char var_3 = (signed char)121;
short var_7 = (short)-27594;
signed char var_9 = (signed char)9;
_Bool var_10 = (_Bool)0;
long long int var_12 = 5314557900137265106LL;
int zero = 0;
unsigned int var_17 = 327924730U;
long long int var_18 = -9031022675722598003LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
