#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5971152887240429004LL;
long long int var_3 = 973809362798766630LL;
long long int var_7 = 796122877784654735LL;
int var_8 = -603812055;
unsigned int var_9 = 1832038707U;
int zero = 0;
signed char var_10 = (signed char)45;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
