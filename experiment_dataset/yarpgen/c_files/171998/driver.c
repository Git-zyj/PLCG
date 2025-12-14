#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
short var_1 = (short)-19171;
long long int var_2 = 3079823538259368110LL;
int var_3 = -1079519805;
long long int var_4 = 5940211303092503892LL;
int var_5 = 330115369;
unsigned long long int var_6 = 4155908552246101555ULL;
int var_7 = -509765365;
int var_8 = -2070469648;
unsigned long long int var_9 = 11535719621766684654ULL;
unsigned short var_10 = (unsigned short)29852;
int var_11 = -1394941676;
unsigned int var_12 = 4132673838U;
unsigned char var_13 = (unsigned char)160;
short var_14 = (short)-3918;
long long int var_16 = -3931667869287490127LL;
unsigned int var_17 = 2929859546U;
short var_18 = (short)1639;
long long int var_19 = 5831715612735287661LL;
int zero = 0;
long long int var_20 = -854632344566533344LL;
int var_21 = 389711082;
unsigned char var_22 = (unsigned char)107;
int var_23 = 1818229124;
unsigned int var_24 = 1071973017U;
int var_25 = 1563423162;
unsigned int var_26 = 2539398830U;
unsigned long long int var_27 = 18423775873886086591ULL;
unsigned int var_28 = 1116338228U;
unsigned char var_29 = (unsigned char)68;
_Bool var_30 = (_Bool)1;
int var_31 = -1020983939;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
