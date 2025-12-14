#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned long long int var_3 = 14023431673702836656ULL;
unsigned short var_4 = (unsigned short)2887;
unsigned char var_5 = (unsigned char)92;
unsigned long long int var_7 = 6252018148890038098ULL;
unsigned short var_8 = (unsigned short)34563;
unsigned short var_11 = (unsigned short)30106;
long long int var_12 = -7462914054554852685LL;
unsigned long long int var_14 = 1256555661565562141ULL;
unsigned short var_15 = (unsigned short)23258;
int zero = 0;
long long int var_16 = 7147462332728408943LL;
unsigned long long int var_17 = 5105785084439922200ULL;
unsigned long long int var_18 = 17985878058957326021ULL;
unsigned long long int var_19 = 17482970257165859368ULL;
long long int var_20 = 8834704766183540234LL;
unsigned long long int var_21 = 7026401721963914896ULL;
long long int var_22 = -2503201719583199989LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
