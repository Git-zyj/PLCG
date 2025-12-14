#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 912646371U;
unsigned short var_4 = (unsigned short)14975;
unsigned short var_8 = (unsigned short)14126;
long long int var_9 = -7789976310040329792LL;
signed char var_16 = (signed char)-1;
int zero = 0;
long long int var_19 = -4719312172855876313LL;
unsigned long long int var_20 = 16858401054532373426ULL;
unsigned int var_21 = 3572328723U;
_Bool var_22 = (_Bool)0;
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
