#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
signed char var_1 = (signed char)-121;
unsigned int var_3 = 1358706085U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22990;
unsigned int var_6 = 3276971823U;
int var_7 = -1818233721;
int var_9 = -1016269759;
int zero = 0;
signed char var_10 = (signed char)41;
signed char var_11 = (signed char)117;
unsigned short var_12 = (unsigned short)4899;
signed char var_13 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
