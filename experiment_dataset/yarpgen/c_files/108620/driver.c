#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)81;
signed char var_2 = (signed char)95;
signed char var_7 = (signed char)-116;
unsigned char var_9 = (unsigned char)25;
signed char var_12 = (signed char)31;
long long int var_13 = 7311013981800934148LL;
int zero = 0;
signed char var_15 = (signed char)-75;
long long int var_16 = -2444754006542870267LL;
unsigned char var_17 = (unsigned char)237;
signed char var_18 = (signed char)55;
unsigned char var_19 = (unsigned char)127;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
