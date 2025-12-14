#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
short var_6 = (short)31598;
int var_10 = -512283957;
unsigned long long int var_14 = 700501999129063147ULL;
int zero = 0;
long long int var_20 = 5170908779732283416LL;
long long int var_21 = 5602587953634611633LL;
short var_22 = (short)2214;
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
