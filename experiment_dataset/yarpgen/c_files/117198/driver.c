#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
signed char var_1 = (signed char)-66;
long long int var_2 = -2120521608638058622LL;
signed char var_3 = (signed char)-101;
int var_4 = 1788075073;
unsigned char var_5 = (unsigned char)149;
long long int var_6 = 1373324658805925998LL;
unsigned short var_7 = (unsigned short)18144;
unsigned long long int var_8 = 12821400567226163140ULL;
signed char var_9 = (signed char)-20;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = -1055813145;
unsigned short var_12 = (unsigned short)34902;
long long int var_13 = 4608267730930031611LL;
signed char var_14 = (signed char)-61;
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
