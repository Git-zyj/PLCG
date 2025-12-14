#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2199717784400646540LL;
long long int var_8 = 6375365616126317955LL;
long long int var_12 = 8561901066117072084LL;
int zero = 0;
long long int var_17 = -3137532655702510491LL;
unsigned int var_18 = 2520002961U;
short var_19 = (short)21240;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
