#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8883729880979058344LL;
unsigned short var_5 = (unsigned short)37646;
unsigned long long int var_7 = 16958834677282338139ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
signed char var_16 = (signed char)-121;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = -9064167367455710400LL;
int zero = 0;
signed char var_20 = (signed char)-74;
signed char var_21 = (signed char)59;
unsigned long long int var_22 = 15306215149734358473ULL;
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
