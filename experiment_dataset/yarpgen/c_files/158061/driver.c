#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6331593655134432451LL;
unsigned int var_1 = 4260996209U;
long long int var_2 = 5774766637174919862LL;
int var_3 = 2136931902;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 627580807U;
long long int var_9 = -5341746865315381780LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-11945;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-14;
long long int var_17 = 5978858549705160767LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
