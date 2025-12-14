#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55938;
unsigned short var_5 = (unsigned short)15234;
int var_6 = 112321929;
int var_8 = -353350012;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_18 = -4631964288944179961LL;
int var_19 = -147722856;
unsigned short var_20 = (unsigned short)11482;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
