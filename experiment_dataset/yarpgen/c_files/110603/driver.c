#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11332;
unsigned short var_2 = (unsigned short)47306;
int var_3 = -483217240;
unsigned long long int var_4 = 1268275123272068313ULL;
long long int var_6 = -9205322054974203167LL;
int var_7 = -134897009;
unsigned long long int var_9 = 9092410502171368288ULL;
int var_11 = 924991852;
int zero = 0;
signed char var_12 = (signed char)-85;
_Bool var_13 = (_Bool)0;
int var_14 = -1556279835;
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
