#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
unsigned char var_2 = (unsigned char)58;
unsigned short var_3 = (unsigned short)54890;
long long int var_4 = -3763636595100207388LL;
_Bool var_5 = (_Bool)0;
short var_9 = (short)-7881;
long long int var_10 = -3944955149490029487LL;
unsigned short var_13 = (unsigned short)41009;
unsigned short var_14 = (unsigned short)14477;
long long int var_18 = 4981586773725725986LL;
int zero = 0;
signed char var_19 = (signed char)-94;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3071356875U;
void init() {
}

void checksum() {
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
