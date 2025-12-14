#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6944821486459518477LL;
short var_1 = (short)-3497;
unsigned long long int var_2 = 3756918679616252705ULL;
unsigned char var_3 = (unsigned char)194;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 13722017232269611509ULL;
long long int var_7 = 7763182172942930008LL;
long long int var_8 = -44953179438994244LL;
unsigned long long int var_9 = 1473627895494277418ULL;
int zero = 0;
long long int var_10 = -7003178477743365185LL;
short var_11 = (short)28336;
unsigned char var_12 = (unsigned char)168;
short var_13 = (short)-29014;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
