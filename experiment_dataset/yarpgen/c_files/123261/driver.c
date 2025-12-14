#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 52236691U;
int var_1 = 2130862110;
unsigned short var_2 = (unsigned short)19268;
long long int var_5 = -2595210994656920456LL;
long long int var_6 = -1901392212868660601LL;
unsigned short var_9 = (unsigned short)56486;
int zero = 0;
long long int var_18 = -413726167122974085LL;
int var_19 = 172079325;
unsigned int var_20 = 1079916668U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)38279;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
