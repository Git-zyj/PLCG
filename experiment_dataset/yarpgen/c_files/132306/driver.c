#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-127;
signed char var_9 = (signed char)78;
unsigned int var_11 = 1727518052U;
unsigned long long int var_13 = 17120011497928689368ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)13900;
signed char var_19 = (signed char)47;
unsigned int var_20 = 2887575460U;
long long int var_21 = -7262674346901703960LL;
unsigned int var_22 = 1944890367U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
