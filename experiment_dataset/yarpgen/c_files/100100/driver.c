#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1764625373U;
signed char var_7 = (signed char)100;
signed char var_8 = (signed char)-29;
unsigned int var_9 = 2374836252U;
unsigned int var_11 = 1973322768U;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
long long int var_19 = 5815364577729211914LL;
int var_20 = -1537394288;
unsigned char var_21 = (unsigned char)222;
unsigned char var_22 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
