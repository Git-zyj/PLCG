#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-120;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16057204024883452521ULL;
unsigned long long int var_9 = 12816087578802451939ULL;
unsigned long long int var_11 = 13813540217847968171ULL;
int zero = 0;
unsigned long long int var_19 = 8151175766944431159ULL;
unsigned long long int var_20 = 17469829882525732536ULL;
short var_21 = (short)5367;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
