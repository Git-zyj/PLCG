#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
_Bool var_7 = (_Bool)1;
long long int var_8 = -7645265143677552961LL;
long long int var_9 = 3984626028501409641LL;
unsigned short var_11 = (unsigned short)5218;
int var_15 = -261691260;
unsigned short var_17 = (unsigned short)49011;
int zero = 0;
unsigned short var_19 = (unsigned short)58159;
unsigned int var_20 = 825609681U;
unsigned long long int var_21 = 699660528965325690ULL;
short var_22 = (short)21701;
void init() {
}

void checksum() {
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
