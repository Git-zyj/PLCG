#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14090058829574471422ULL;
unsigned int var_5 = 949651770U;
signed char var_7 = (signed char)-75;
signed char var_8 = (signed char)89;
int var_9 = 516331856;
short var_12 = (short)-31441;
unsigned long long int var_19 = 12323011784728365400ULL;
int zero = 0;
signed char var_20 = (signed char)-112;
unsigned int var_21 = 546502727U;
unsigned char var_22 = (unsigned char)202;
void init() {
}

void checksum() {
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
