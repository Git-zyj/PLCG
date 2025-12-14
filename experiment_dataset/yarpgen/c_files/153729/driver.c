#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4476794179168828815ULL;
unsigned long long int var_5 = 5958569497050807437ULL;
unsigned long long int var_6 = 18330681203605906929ULL;
unsigned char var_8 = (unsigned char)253;
int var_9 = 1855570205;
long long int var_10 = 1856359607599693956LL;
int zero = 0;
unsigned short var_12 = (unsigned short)40828;
long long int var_13 = 3707952189180299141LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)64345;
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
