#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
signed char var_1 = (signed char)-120;
unsigned int var_4 = 3193755023U;
unsigned long long int var_5 = 12241751421594473085ULL;
unsigned long long int var_6 = 5863703183548687998ULL;
signed char var_7 = (signed char)32;
unsigned long long int var_8 = 14820264580462663444ULL;
int zero = 0;
unsigned int var_12 = 862798612U;
unsigned int var_13 = 315837276U;
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
