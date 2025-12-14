#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 254678093223736618ULL;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = -355048249887998771LL;
unsigned short var_9 = (unsigned short)19051;
int zero = 0;
unsigned short var_12 = (unsigned short)28752;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 12532972488462739835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
