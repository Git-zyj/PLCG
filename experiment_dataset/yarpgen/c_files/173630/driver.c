#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58502;
signed char var_2 = (signed char)-48;
unsigned short var_3 = (unsigned short)31508;
long long int var_4 = -6631481118634484105LL;
long long int var_5 = -4452098143434041348LL;
unsigned char var_6 = (unsigned char)77;
long long int var_8 = -8837791591866938477LL;
long long int var_9 = -6506881134098088971LL;
long long int var_10 = -4325035330693533242LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)213;
signed char var_13 = (signed char)-12;
void init() {
}

void checksum() {
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
