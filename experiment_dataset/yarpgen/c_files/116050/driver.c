#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-5;
int var_8 = 810996372;
unsigned long long int var_9 = 10980094700490341175ULL;
int zero = 0;
signed char var_17 = (signed char)69;
long long int var_18 = 4591763127110385491LL;
unsigned short var_19 = (unsigned short)62463;
unsigned long long int var_20 = 4948063367770159946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
