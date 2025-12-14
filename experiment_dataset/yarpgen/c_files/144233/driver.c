#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7301352983326950545LL;
signed char var_4 = (signed char)-55;
unsigned short var_6 = (unsigned short)39800;
unsigned long long int var_7 = 8132491752429637845ULL;
unsigned int var_9 = 14975492U;
unsigned long long int var_10 = 10211726993833132440ULL;
signed char var_14 = (signed char)-77;
int zero = 0;
unsigned long long int var_17 = 4355684100686523912ULL;
unsigned int var_18 = 411963835U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
