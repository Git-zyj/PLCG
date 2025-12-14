#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1380939785;
short var_2 = (short)12176;
short var_3 = (short)467;
short var_4 = (short)-13990;
short var_5 = (short)-30917;
int var_6 = -1481438792;
short var_7 = (short)-28862;
int var_8 = 54740783;
short var_9 = (short)-18481;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 471676228;
short var_12 = (short)5265;
short var_13 = (short)475;
unsigned long long int var_14 = 12421998130047776549ULL;
short var_15 = (short)10362;
_Bool var_16 = (_Bool)0;
short var_17 = (short)18094;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-21077;
short var_20 = (short)-10692;
signed char var_21 = (signed char)-42;
unsigned long long int var_22 = 10886358692760983291ULL;
short var_23 = (short)-23673;
short var_24 = (short)-18163;
short var_25 = (short)-30031;
short var_26 = (short)-25177;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 4199110885391398353ULL;
short var_29 = (short)-25184;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
