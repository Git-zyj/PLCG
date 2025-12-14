#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14833086417793113629ULL;
long long int var_5 = -4930019328526556289LL;
unsigned short var_10 = (unsigned short)16906;
long long int var_12 = -4682616324928710718LL;
int zero = 0;
long long int var_13 = 5433351108350519975LL;
long long int var_14 = 3870135351299802682LL;
long long int var_15 = -8072240927368138052LL;
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
