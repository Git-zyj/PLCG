#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2144128240;
signed char var_6 = (signed char)-2;
long long int var_7 = 885105376055545331LL;
int zero = 0;
long long int var_17 = -47189830313291531LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7290316201004213920LL;
short var_20 = (short)29728;
unsigned int var_21 = 3095347201U;
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
