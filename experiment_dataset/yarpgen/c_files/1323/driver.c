#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)49;
unsigned int var_2 = 1749565888U;
unsigned short var_3 = (unsigned short)36798;
unsigned long long int var_7 = 845061290998234490ULL;
int var_8 = -1438420681;
int var_9 = 1885540492;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-39;
unsigned long long int var_13 = 2249645018657378769ULL;
unsigned short var_15 = (unsigned short)31110;
unsigned int var_17 = 550610923U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)25;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 12055034206093420923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
