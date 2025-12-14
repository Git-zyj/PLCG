#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
long long int var_3 = 9057771533443061123LL;
unsigned long long int var_5 = 251278200505707824ULL;
signed char var_8 = (signed char)59;
long long int var_11 = 4684674819442760621LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10408837624661414847ULL;
unsigned char var_14 = (unsigned char)93;
signed char var_15 = (signed char)81;
void init() {
}

void checksum() {
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
