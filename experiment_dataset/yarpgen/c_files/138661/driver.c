#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6651011802638451435LL;
long long int var_3 = 756157607750837044LL;
signed char var_5 = (signed char)-17;
long long int var_10 = -5032224331001635285LL;
int zero = 0;
unsigned long long int var_20 = 14423651313024161899ULL;
int var_21 = -1206118157;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
