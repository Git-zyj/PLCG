#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9241113812044335817ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)45629;
unsigned char var_4 = (unsigned char)180;
int var_5 = -90598376;
long long int var_6 = 2228444206345735784LL;
unsigned long long int var_8 = 736096576999330192ULL;
unsigned int var_9 = 2657640269U;
int zero = 0;
long long int var_10 = 4364667463110409554LL;
unsigned long long int var_11 = 12820879764447187881ULL;
signed char var_12 = (signed char)-89;
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
