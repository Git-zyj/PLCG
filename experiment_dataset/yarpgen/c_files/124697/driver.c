#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3115661736793668566LL;
unsigned int var_2 = 74027213U;
unsigned long long int var_3 = 10961738299083758701ULL;
int var_4 = 845294073;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)63;
signed char var_8 = (signed char)12;
long long int var_11 = 8143798284776882612LL;
int zero = 0;
signed char var_12 = (signed char)-106;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)6;
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
