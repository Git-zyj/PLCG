#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 458534856;
long long int var_4 = 209498961749767154LL;
long long int var_6 = 4544243090447797729LL;
long long int var_8 = 5559351784326174677LL;
long long int var_9 = 2819909813605026230LL;
int zero = 0;
unsigned long long int var_11 = 9676840696976999445ULL;
unsigned short var_12 = (unsigned short)23485;
void init() {
}

void checksum() {
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
