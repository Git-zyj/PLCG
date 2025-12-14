#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned long long int var_6 = 9286346362104233034ULL;
unsigned short var_8 = (unsigned short)26532;
int zero = 0;
long long int var_10 = 3875168390120579294LL;
long long int var_11 = -776536411422924591LL;
int var_12 = 186835540;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
