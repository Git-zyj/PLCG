#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9059;
unsigned int var_1 = 3892099681U;
int var_2 = 31876791;
unsigned short var_3 = (unsigned short)48354;
signed char var_4 = (signed char)-27;
unsigned short var_5 = (unsigned short)2332;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3557364934U;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
unsigned long long int var_11 = 7577829500931864233ULL;
long long int var_12 = -6017298225259405516LL;
short var_13 = (short)15282;
signed char var_14 = (signed char)-35;
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
