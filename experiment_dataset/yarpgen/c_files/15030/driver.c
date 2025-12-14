#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8052530082339159252ULL;
unsigned long long int var_1 = 7377597960767111667ULL;
unsigned long long int var_2 = 8642693246998561932ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15734472600401014972ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)207;
unsigned char var_7 = (unsigned char)105;
unsigned long long int var_8 = 18439132145227336092ULL;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1646354178;
_Bool var_13 = (_Bool)1;
long long int var_14 = 528900482764195222LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
