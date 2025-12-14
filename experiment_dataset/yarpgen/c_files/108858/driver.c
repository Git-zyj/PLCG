#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
long long int var_2 = 5233572130730262372LL;
unsigned int var_6 = 2106775991U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 12931591770345353946ULL;
int var_19 = -1889221814;
void init() {
}

void checksum() {
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
