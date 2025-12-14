#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)134;
unsigned char var_5 = (unsigned char)230;
long long int var_9 = 3658590803580057748LL;
int zero = 0;
unsigned short var_11 = (unsigned short)45024;
unsigned long long int var_12 = 8184922509982538613ULL;
signed char var_13 = (signed char)60;
signed char var_14 = (signed char)112;
unsigned long long int var_15 = 18089838256053131493ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
