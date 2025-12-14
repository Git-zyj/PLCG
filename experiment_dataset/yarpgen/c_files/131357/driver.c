#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2122820150;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)35234;
unsigned long long int var_5 = 7584955748356715523ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)41390;
unsigned long long int var_9 = 471704824372798048ULL;
int zero = 0;
unsigned int var_10 = 2317625870U;
unsigned int var_11 = 3806277574U;
unsigned int var_12 = 3482030363U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
