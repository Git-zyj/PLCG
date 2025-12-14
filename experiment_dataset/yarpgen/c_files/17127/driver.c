#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8224724443744536290LL;
long long int var_1 = -7060159546077680064LL;
long long int var_3 = 581862973782648853LL;
long long int var_6 = -85464418493002617LL;
long long int var_8 = -7283592785333921849LL;
long long int var_9 = -4021836466691453339LL;
long long int var_10 = 121578137762561090LL;
long long int var_12 = 4660046089487332168LL;
int zero = 0;
long long int var_14 = 1958789273870254882LL;
long long int var_15 = -2306706347877255068LL;
long long int var_16 = 969949989082922659LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
