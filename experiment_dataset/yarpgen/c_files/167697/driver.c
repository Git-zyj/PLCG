#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 651426695U;
unsigned long long int var_2 = 10352758936788605522ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3301320483U;
short var_6 = (short)3705;
unsigned char var_7 = (unsigned char)216;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 13522827450875555759ULL;
unsigned char var_10 = (unsigned char)186;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 759733511U;
int zero = 0;
unsigned long long int var_13 = 4849298266973835345ULL;
unsigned long long int var_14 = 9179448546854593048ULL;
void init() {
}

void checksum() {
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
