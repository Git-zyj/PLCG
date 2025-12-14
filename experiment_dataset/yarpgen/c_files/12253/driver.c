#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned long long int var_1 = 3196187208978915292ULL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-59;
unsigned short var_9 = (unsigned short)60448;
long long int var_10 = -1085246680516818050LL;
int zero = 0;
unsigned int var_17 = 3921960406U;
unsigned char var_18 = (unsigned char)162;
unsigned int var_19 = 638051795U;
signed char var_20 = (signed char)-102;
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
