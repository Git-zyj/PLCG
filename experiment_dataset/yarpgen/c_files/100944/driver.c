#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7585912423024040742LL;
unsigned short var_3 = (unsigned short)26886;
signed char var_5 = (signed char)-3;
unsigned int var_7 = 3118532377U;
signed char var_10 = (signed char)-120;
long long int var_11 = -1126813017498788762LL;
int zero = 0;
unsigned char var_12 = (unsigned char)187;
unsigned short var_13 = (unsigned short)9154;
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
