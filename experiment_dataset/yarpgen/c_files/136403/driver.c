#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 603987632413586923LL;
unsigned long long int var_2 = 4570722362767704680ULL;
long long int var_3 = 5667524316207890375LL;
unsigned int var_4 = 3586806400U;
unsigned short var_7 = (unsigned short)16195;
unsigned char var_8 = (unsigned char)68;
short var_9 = (short)21947;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2375632433U;
int zero = 0;
unsigned int var_20 = 521675041U;
short var_21 = (short)-29339;
signed char var_22 = (signed char)-26;
void init() {
}

void checksum() {
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
