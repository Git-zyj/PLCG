#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 4398489;
int var_1 = -134243475;
unsigned long long int var_2 = 16716942340050376902ULL;
long long int var_4 = -5052999484166696574LL;
unsigned char var_5 = (unsigned char)50;
int zero = 0;
long long int var_10 = -4456883365302280735LL;
long long int var_11 = 3877730051308986666LL;
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
