#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-35;
signed char var_2 = (signed char)108;
unsigned char var_9 = (unsigned char)221;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 12120493761364511799ULL;
int var_13 = 1130359238;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
