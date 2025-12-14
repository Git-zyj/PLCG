#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
unsigned int var_2 = 937413448U;
unsigned long long int var_4 = 2606560883262290776ULL;
unsigned long long int var_7 = 12516280161862345914ULL;
unsigned long long int var_8 = 18376641225537565177ULL;
signed char var_9 = (signed char)-56;
long long int var_10 = -5686688547932052153LL;
unsigned short var_11 = (unsigned short)19687;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3876740842U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
