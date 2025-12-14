#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6706483939209948811LL;
unsigned char var_1 = (unsigned char)212;
unsigned char var_2 = (unsigned char)31;
signed char var_3 = (signed char)-65;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)124;
unsigned long long int var_6 = 2739694081841847395ULL;
unsigned int var_7 = 1289020233U;
unsigned short var_8 = (unsigned short)42751;
unsigned short var_9 = (unsigned short)27471;
unsigned char var_10 = (unsigned char)227;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3951578360167056833ULL;
long long int var_13 = 459826772358922060LL;
unsigned char var_14 = (unsigned char)226;
unsigned int var_15 = 2206024610U;
signed char var_16 = (signed char)-124;
unsigned short var_17 = (unsigned short)52763;
int zero = 0;
unsigned short var_19 = (unsigned short)49745;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 16035418054430045756ULL;
unsigned short var_22 = (unsigned short)19436;
unsigned short var_23 = (unsigned short)12447;
_Bool var_24 = (_Bool)1;
int var_25 = -531736422;
signed char var_26 = (signed char)39;
long long int var_27 = 5601672027149059091LL;
unsigned short var_28 = (unsigned short)10955;
unsigned short var_29 = (unsigned short)36385;
unsigned long long int var_30 = 9250545551893583430ULL;
unsigned short var_31 = (unsigned short)29446;
long long int var_32 = 2161396998707156049LL;
unsigned short var_33 = (unsigned short)48641;
unsigned short var_34 = (unsigned short)61206;
unsigned int var_35 = 666507135U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
