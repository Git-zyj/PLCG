#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 704056888294321018ULL;
long long int var_4 = -5414417859542698528LL;
unsigned int var_5 = 371613616U;
long long int var_8 = 2600121330568875796LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)127;
int zero = 0;
unsigned int var_17 = 4187348081U;
unsigned long long int var_18 = 17197845366151031704ULL;
signed char var_19 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
