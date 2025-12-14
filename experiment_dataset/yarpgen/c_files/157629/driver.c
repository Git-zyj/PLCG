#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16973725415930347248ULL;
unsigned long long int var_2 = 9235856749938277137ULL;
unsigned int var_4 = 923480380U;
int var_5 = -1474639508;
unsigned short var_7 = (unsigned short)50003;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 4026191555U;
int var_10 = 22162002;
int zero = 0;
unsigned char var_11 = (unsigned char)118;
long long int var_12 = -7204552725450273501LL;
unsigned char var_13 = (unsigned char)120;
unsigned long long int var_14 = 13386594506980780820ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
