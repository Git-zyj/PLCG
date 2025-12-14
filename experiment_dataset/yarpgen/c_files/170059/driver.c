#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6346673844292104125LL;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)55;
unsigned char var_5 = (unsigned char)202;
signed char var_7 = (signed char)-94;
long long int var_9 = 8305151448499104999LL;
signed char var_14 = (signed char)47;
unsigned long long int var_15 = 9335414182761008342ULL;
signed char var_16 = (signed char)70;
int zero = 0;
signed char var_19 = (signed char)35;
unsigned char var_20 = (unsigned char)188;
unsigned short var_21 = (unsigned short)16573;
unsigned short var_22 = (unsigned short)30606;
void init() {
}

void checksum() {
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
