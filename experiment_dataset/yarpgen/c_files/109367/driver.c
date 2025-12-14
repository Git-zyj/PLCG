#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -821753876735637520LL;
unsigned char var_8 = (unsigned char)63;
unsigned int var_9 = 1233530973U;
long long int var_11 = -7886192202142686818LL;
int zero = 0;
long long int var_13 = -1064111487002588299LL;
unsigned int var_14 = 3643617476U;
int var_15 = -842640788;
_Bool var_16 = (_Bool)0;
int var_17 = -959017592;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
