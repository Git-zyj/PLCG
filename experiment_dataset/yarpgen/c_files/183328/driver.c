#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14114;
unsigned long long int var_9 = 5220047526647785611ULL;
int zero = 0;
unsigned long long int var_12 = 12350442265986662494ULL;
unsigned long long int var_13 = 4680358209414067286ULL;
int var_14 = 380395022;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
