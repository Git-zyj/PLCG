#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
long long int var_1 = -8911382014777847150LL;
signed char var_2 = (signed char)119;
signed char var_3 = (signed char)-94;
int var_4 = 103072885;
unsigned long long int var_6 = 12309340531070029661ULL;
int var_7 = -471673026;
unsigned short var_8 = (unsigned short)22100;
unsigned long long int var_9 = 4688824152200020589ULL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7884005766821036024LL;
unsigned long long int var_14 = 3554167418574897675ULL;
int var_15 = 1401228213;
int zero = 0;
long long int var_17 = 8306196319616679893LL;
unsigned long long int var_18 = 3167602169264795395ULL;
unsigned short var_19 = (unsigned short)36119;
signed char var_20 = (signed char)122;
int var_21 = 281659112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
