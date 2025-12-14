#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)26571;
long long int var_5 = 3030172746817282778LL;
unsigned int var_10 = 4109695649U;
unsigned char var_18 = (unsigned char)156;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-35;
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
