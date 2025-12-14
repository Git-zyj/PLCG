#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 205162133530945803LL;
unsigned long long int var_6 = 9060061740536311858ULL;
long long int var_7 = -3766570121158146643LL;
signed char var_10 = (signed char)68;
unsigned long long int var_14 = 15290594139470747872ULL;
int zero = 0;
int var_19 = -964709548;
int var_20 = -450262443;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
