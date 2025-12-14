#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13617295194788513606ULL;
unsigned long long int var_1 = 8282816010121286241ULL;
unsigned long long int var_3 = 11575515695296841581ULL;
unsigned long long int var_4 = 17062578700058529535ULL;
unsigned long long int var_5 = 10428533468001459712ULL;
unsigned long long int var_9 = 14085905200373478381ULL;
unsigned long long int var_12 = 13837653276361662054ULL;
int zero = 0;
unsigned long long int var_13 = 14513560785693502730ULL;
unsigned long long int var_14 = 6300306003896082111ULL;
unsigned long long int var_15 = 5512195724711321386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
