#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned short var_4 = (unsigned short)50003;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 7458645708886799661ULL;
int zero = 0;
int var_12 = 1216471284;
int var_13 = 254396637;
signed char var_14 = (signed char)-98;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
