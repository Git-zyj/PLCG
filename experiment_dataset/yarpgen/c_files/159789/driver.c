#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned long long int var_2 = 2410291837555101961ULL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)-59;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)50;
unsigned char var_13 = (unsigned char)231;
signed char var_18 = (signed char)-127;
signed char var_19 = (signed char)14;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
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
