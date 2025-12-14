#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)177;
unsigned long long int var_2 = 10501724664524010198ULL;
unsigned char var_4 = (unsigned char)169;
unsigned short var_5 = (unsigned short)34169;
unsigned char var_6 = (unsigned char)156;
unsigned int var_7 = 3881228808U;
unsigned char var_8 = (unsigned char)188;
unsigned int var_9 = 3737961753U;
unsigned char var_11 = (unsigned char)162;
unsigned char var_13 = (unsigned char)131;
unsigned short var_15 = (unsigned short)33229;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)151;
unsigned long long int var_19 = 11091090130871499862ULL;
int zero = 0;
signed char var_20 = (signed char)-114;
unsigned char var_21 = (unsigned char)27;
long long int var_22 = -5540294876204357924LL;
unsigned int var_23 = 1233687189U;
unsigned long long int var_24 = 3142382224347358269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
