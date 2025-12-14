#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-106;
unsigned int var_1 = 847542966U;
long long int var_4 = -7037649617403471366LL;
unsigned short var_5 = (unsigned short)9785;
_Bool var_9 = (_Bool)0;
short var_11 = (short)24588;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7805472869191107434LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)58440;
int zero = 0;
long long int var_19 = -2838218229055345403LL;
long long int var_20 = -2211440460725225559LL;
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
