#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1268749691235656279ULL;
long long int var_9 = 3076780520670558626LL;
signed char var_10 = (signed char)-113;
int zero = 0;
int var_20 = -1898611344;
signed char var_21 = (signed char)-97;
unsigned char var_22 = (unsigned char)223;
int var_23 = -1661671903;
int var_24 = 1431121238;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
